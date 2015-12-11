/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKPath : NSObject {
    BOOL _cyclical;
    struct PolylinePathway { 
        int (**_vptr$PolylinePathway)(); 
        int pointCount; 
        struct Vec3 {} *points; 
        float radius; 
        bool cyclic; 
        float segmentLength; 
        float segmentProjection; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } local; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } chosen; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } segmentNormal; 
        float *lengths; 
        struct Vec3 {} *normals; 
        float totalPathLength; 
    } _pathway;
    float _radius;
}

@property (getter=isCyclical, nonatomic) BOOL cyclical;
@property (readonly) unsigned int numPoints;
@property (nonatomic) float radius;

+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+ (id)pathWithPoints:(/* Warning: Unrecognized filer type: '8' using 'void*' */ void**)arg1 count:(unsigned long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;

- (id).cxx_construct;
- (BOOL)cyclical;
- (id)init;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '8' using 'void*' */ void**)arg1 count:(unsigned long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;
- (BOOL)isCyclical;
- (unsigned int)numPoints;
- (struct PolylinePathway { int (**x1)(); int x2; struct Vec3 {} *x3; float x4; bool x5; float x6; float x7; struct Vec3 { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8; struct Vec3 { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; struct Vec3 { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; float *x11; struct Vec3 {} *x12; float x13; }*)pathway;
- (void)pointAtIndex:(unsigned int)arg1;
- (float)radius;
- (void)setCyclical:(BOOL)arg1;
- (void)setRadius:(float)arg1;

@end
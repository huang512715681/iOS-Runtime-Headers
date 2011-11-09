/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIBending : NSObject  {
    float mSpaceWidth;
    float mSpaceHeight;
    BOOL mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize { float x1; float x2; })arg1 spaceSize:(struct CGSize { float x1; float x2; })arg2 maxNodeCount:(unsigned int)arg3 maxColumnCount:(unsigned int)arg4 state:(id)arg5;
+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;

- (id)initWithArrows:(BOOL)arg1;
- (void)mapWithState:(id)arg1;
- (void)setRectHeight:(float)arg1;
- (void)setMaxNodeCount:(unsigned int)arg1;
- (void)setMaxColumnCount:(unsigned int)arg1;

@end
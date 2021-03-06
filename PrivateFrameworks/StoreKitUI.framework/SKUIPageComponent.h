/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    int _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property (nonatomic, readonly) int componentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *metricsElementName;
@property (nonatomic) int metricsLocationPosition;
@property (getter=isMissingItemData, nonatomic, readonly) BOOL missingItemData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUIViewElement *viewElement;

- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)_setMetricsLocationPosition:(int)arg1;
- (int)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (int)metricsLocationPosition;
- (id)valueForMetricsField:(id)arg1;
- (id)viewElement;

@end

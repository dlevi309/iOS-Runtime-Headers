/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXActionPerformerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIViewController, PXBarSpec, NSMutableDictionary, NSArray;

@interface PXBarsController : NSObject {

	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _wantsAnimatedBarsUpdate;
	UIViewController* _viewController;
	id<PXActionPerformerDelegate> _actionPerformerDelegate;
	PXBarSpec* _barSpec;
	NSMutableDictionary* _barButtonItemCache;
	NSMutableDictionary* _barButtonItemCachedPlacement;

}

@property (nonatomic,retain) PXBarSpec * barSpec;                                                       //@synthesize barSpec=_barSpec - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * barButtonItemCache;                                //@synthesize barButtonItemCache=_barButtonItemCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * barButtonItemCachedPlacement;                      //@synthesize barButtonItemCachedPlacement=_barButtonItemCachedPlacement - In the implementation block
@property (nonatomic,readonly) double fixedSpaceForInterButtonSpacing; 
@property (nonatomic,readonly) double fixedSpaceForEndButtonSpacing; 
@property (assign,nonatomic,__weak) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (assign,nonatomic) BOOL wantsAnimatedBarsUpdate;                                              //@synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate - In the implementation block
@property (nonatomic,readonly) NSArray * leftBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * rightBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * toolbarItemIdentifiers; 
-(void)setViewController:(UIViewController *)arg1 ;
-(PXBarSpec *)barSpec;
-(id)init;
-(void)setBarSpec:(PXBarSpec *)arg1 ;
-(id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(void)invalidateBarButtonItemWithIdentifier:(id)arg1 ;
-(id)cachedBarButtonItemForIdentifier:(id)arg1 ;
-(void)purgeCachedBarButtonItemsForIdentifiers:(id)arg1 ;
-(BOOL)wantsAnimatedBarsUpdate;
-(void)setWantsAnimatedBarsUpdate:(BOOL)arg1 ;
-(NSMutableDictionary *)barButtonItemCache;
-(NSMutableDictionary *)barButtonItemCachedPlacement;
-(void)updateBars;
-(void)invalidateBars;
-(void)_updateBarsIfNeeded;
-(void)updateIfNeeded;
-(UIViewController *)viewController;
-(id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(NSArray *)rightBarButtonItemIdentifiers;
-(BOOL)_needsUpdate;
-(double)fixedSpaceForEndButtonSpacing;
-(id<PXActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(double)fixedSpaceForInterButtonSpacing;
-(NSArray *)toolbarItemIdentifiers;
-(NSArray *)leftBarButtonItemIdentifiers;
@end


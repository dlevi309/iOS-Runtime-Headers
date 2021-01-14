/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>

@protocol PXWidgetBarDelegate, PXAnonymousView;
@class PXScrollViewController, PXTilingController, PXWidgetBarSpec, NSString, PXBasicTileAnimator, NSMutableSet, PXWidgetBarLayout, NSObject;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX24 _needsUpdateFlags;
	SCD_Struct_PX59 _delegateRespondsTo;
	BOOL _allowUserInteractionWithSubtitle;
	PXScrollViewController* _scrollViewController;
	id<PXWidgetBarDelegate> _delegate;
	PXTilingController* _tilingController;
	PXWidgetBarSpec* _spec;
	NSString* _title;
	NSString* _subtitle;
	NSString* _caption;
	NSString* _disclosureTitle;
	PXBasicTileAnimator* __tileAnimator;
	NSMutableSet* __tilesInUse;
	double __viewHeight;
	PXWidgetBarLayout* __layout;
	NSObject*<PXAnonymousView> _view;

}

@property (nonatomic,readonly) PXBasicTileAnimator * _tileAnimator;                               //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                        //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (assign,setter=_setViewHeight:,nonatomic) double _viewHeight;                           //@synthesize _viewHeight=__viewHeight - In the implementation block
@property (nonatomic,readonly) PXWidgetBarLayout * _layout;                                       //@synthesize _layout=__layout - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousView> view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) double viewHeight; 
@property (nonatomic,__weak,readonly) PXScrollViewController * scrollViewController;              //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetBarDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                             //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,retain) PXWidgetBarSpec * spec;                                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * caption;                                                    //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * disclosureTitle;                                            //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithSubtitle;                               //@synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXWidgetBarLayout *)_layout;
-(void)setSpec:(PXWidgetBarSpec *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)didSelectSubtitle;
-(void)didSelectDisclosureAffordance;
-(void)_setViewHeight:(double)arg1 ;
-(void)setAllowUserInteractionWithSubtitle:(BOOL)arg1 ;
-(void)invalidateView;
-(void)_updateViewIfNeeded;
-(void)invalidateViewHeight;
-(void)_updateViewHeightIfNeeded;
-(double)_viewHeight;
-(id)init;
-(PXScrollViewController *)scrollViewController;
-(id<PXWidgetBarDelegate>)delegate;
-(id)createView;
-(double)viewHeight;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateIfNeeded;
-(id)createTileAnimator;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(NSMutableSet *)_tilesInUse;
-(PXTilingController *)tilingController;
-(PXWidgetBarSpec *)spec;
-(void)setDelegate:(id<PXWidgetBarDelegate>)arg1 ;
-(NSObject*<PXAnonymousView>)view;
-(PXBasicTileAnimator *)_tileAnimator;
-(void)updateView;
-(id)initWithScrollViewController:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)checkInTile:(id)arg1 ;
-(id)checkOutTileWithKind:(long long)arg1 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(NSString *)disclosureTitle;
-(void)setDisclosureTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateLayoutIfNeeded;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSString *)title;
-(BOOL)allowUserInteractionWithSubtitle;
-(void)_invalidateLayout;
@end


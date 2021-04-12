/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PUAssetViewModel, PUBadgeInfoProvider, PXUIAssetBadgeView, NSString;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver> {

	BOOL __needsUpdateBadgeInfo;
	BOOL __needsUpdateBadgeProvider;
	BOOL __needsUpdateBadgeView;
	BOOL __isOverContent;
	PUAssetViewModel* _assetViewModel;
	PUBadgeInfoProvider* __badgeInfoProvider;
	PXUIAssetBadgeView* __badgeView;
	double __contentWidth;
	PXAssetBadgeInfo __badgeInfo;

}

@property (assign,setter=_setNeedsUpdateBadgeInfo:,nonatomic) BOOL _needsUpdateBadgeInfo;                      //@synthesize _needsUpdateBadgeInfo=__needsUpdateBadgeInfo - In the implementation block
@property (assign,setter=_setNeedsUpdateBadgeProvider:,nonatomic) BOOL _needsUpdateBadgeProvider;              //@synthesize _needsUpdateBadgeProvider=__needsUpdateBadgeProvider - In the implementation block
@property (assign,setter=_setNeedsUpdateBadgeView:,nonatomic) BOOL _needsUpdateBadgeView;                      //@synthesize _needsUpdateBadgeView=__needsUpdateBadgeView - In the implementation block
@property (assign,setter=_setBadgeInfo:,nonatomic) PXAssetBadgeInfo _badgeInfo;                                //@synthesize _badgeInfo=__badgeInfo - In the implementation block
@property (nonatomic,retain) PUBadgeInfoProvider * _badgeInfoProvider;                                         //@synthesize _badgeInfoProvider=__badgeInfoProvider - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                                //@synthesize _badgeView=__badgeView - In the implementation block
@property (assign,setter=_setOverContent:,nonatomic) BOOL _isOverContent;                                      //@synthesize _isOverContent=__isOverContent - In the implementation block
@property (assign,setter=_setContentWidth:,nonatomic) double _contentWidth;                                    //@synthesize _contentWidth=__contentWidth - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_configureBadgeView:(id)arg1 withBadgeInfo:(PXAssetBadgeInfo)arg2 isOverContent:(BOOL)arg3 contentWidth:(double)arg4 animated:(BOOL)arg5 ;
+(id)badgeSizeCacheKeyValueFromBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
+(CGSize)_badgeTileSizeForBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
+(CGSize)badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2 ;
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PXUIAssetBadgeView *)_badgeView;
-(void)_updateIfNeeded;
-(void)prepareForReuse;
-(PXAssetBadgeInfo)_badgeInfo;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)_setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)_setContentWidth:(double)arg1 ;
-(void)_invalidateBadgeInfo;
-(void)_updateBadgeInfoIfNeeded;
-(void)_invalidateBadgeProvider;
-(void)_updateBadgeProviderIfNeeded;
-(BOOL)_needsUpdateBadgeInfo;
-(void)_setNeedsUpdateBadgeInfo:(BOOL)arg1 ;
-(BOOL)_needsUpdateBadgeProvider;
-(void)_setNeedsUpdateBadgeProvider:(BOOL)arg1 ;
-(PUBadgeInfoProvider *)_badgeInfoProvider;
-(void)set_badgeInfoProvider:(PUBadgeInfoProvider *)arg1 ;
-(void)viewDidLoad;
-(void)_invalidateBadgeView;
-(BOOL)_needsUpdate;
-(id)loadView;
-(void)_setNeedsUpdate;
-(double)_contentWidth;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
-(void)_setOverContent:(BOOL)arg1 ;
-(void)_updateBadgeViewIfNeeded;
-(BOOL)_needsUpdateBadgeView;
-(void)_setNeedsUpdateBadgeView:(BOOL)arg1 ;
-(BOOL)_isOverContent;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXPhotosViewDelegate, PXPhotosGridOptionsController;
@class PXAssetsDataSourceManager, PXMediaProvider, PXSectionedSelectionManager, PXAssetActionManager, PXAssetCollectionActionManager, NSString, PXLoadingStatusManager;

@interface PXPhotosViewConfiguration : NSObject <NSCopying> {

	BOOL _wantsTabBarHidden;
	BOOL _wantsCPLStatus;
	BOOL _wantsContentFilterVisible;
	BOOL _wantsModernNavBarButtons;
	BOOL _allowsCaptions;
	BOOL _startsInSelectMode;
	BOOL _wantsDimmedSelectionStyle;
	BOOL _allowsInteractiveFavoriteBadges;
	BOOL _allowsGridAppearanceActions;
	BOOL _allowsDragAndDrop;
	BOOL _allowsSwipeToSelect;
	BOOL _lowMemoryMode;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXMediaProvider* _mediaProvider;
	PXSectionedSelectionManager* _selectionManager;
	PXAssetActionManager* _assetActionManager;
	PXAssetCollectionActionManager* _assetCollectionActionManager;
	id<PXPhotosViewDelegate> _delegate;
	long long _footerVisibilityStyle;
	NSString* _footerSubtitle;
	long long _navBarStyle;
	long long _sectionHeaderStyle;
	long long _sectionBodyStyle;
	long long _summaryStyle;
	unsigned long long _allowedActions;
	unsigned long long _allowedBehaviors;
	unsigned long long _forbiddenBadges;
	NSString* _title;
	long long _contentMode;
	long long _oneUpPresentationOrigin;
	id<PXPhotosGridOptionsController> _optionsController;
	PXLoadingStatusManager* _loadingStatusManager;

}

@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager;                              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                            //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                             //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetActionManager * assetActionManager;                                  //@synthesize assetActionManager=_assetActionManager - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosViewDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantsTabBarHidden;                                                       //@synthesize wantsTabBarHidden=_wantsTabBarHidden - In the implementation block
@property (assign,nonatomic) long long footerVisibilityStyle;                                              //@synthesize footerVisibilityStyle=_footerVisibilityStyle - In the implementation block
@property (nonatomic,copy) NSString * footerSubtitle;                                                      //@synthesize footerSubtitle=_footerSubtitle - In the implementation block
@property (assign,nonatomic) BOOL wantsCPLStatus;                                                          //@synthesize wantsCPLStatus=_wantsCPLStatus - In the implementation block
@property (assign,nonatomic) BOOL wantsContentFilterVisible;                                               //@synthesize wantsContentFilterVisible=_wantsContentFilterVisible - In the implementation block
@property (assign,nonatomic) long long navBarStyle;                                                        //@synthesize navBarStyle=_navBarStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsModernNavBarButtons;                                                //@synthesize wantsModernNavBarButtons=_wantsModernNavBarButtons - In the implementation block
@property (assign,nonatomic) long long sectionHeaderStyle;                                                 //@synthesize sectionHeaderStyle=_sectionHeaderStyle - In the implementation block
@property (assign,nonatomic) long long sectionBodyStyle;                                                   //@synthesize sectionBodyStyle=_sectionBodyStyle - In the implementation block
@property (assign,nonatomic) long long summaryStyle;                                                       //@synthesize summaryStyle=_summaryStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCaptions;                                                          //@synthesize allowsCaptions=_allowsCaptions - In the implementation block
@property (assign,nonatomic) BOOL startsInSelectMode;                                                      //@synthesize startsInSelectMode=_startsInSelectMode - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmedSelectionStyle;                                               //@synthesize wantsDimmedSelectionStyle=_wantsDimmedSelectionStyle - In the implementation block
@property (assign,nonatomic) unsigned long long allowedActions;                                            //@synthesize allowedActions=_allowedActions - In the implementation block
@property (assign,nonatomic) unsigned long long allowedBehaviors;                                          //@synthesize allowedBehaviors=_allowedBehaviors - In the implementation block
@property (assign,nonatomic) unsigned long long forbiddenBadges;                                           //@synthesize forbiddenBadges=_forbiddenBadges - In the implementation block
@property (assign,nonatomic) BOOL allowsInteractiveFavoriteBadges;                                         //@synthesize allowsInteractiveFavoriteBadges=_allowsInteractiveFavoriteBadges - In the implementation block
@property (assign,nonatomic) BOOL allowsGridAppearanceActions;                                             //@synthesize allowsGridAppearanceActions=_allowsGridAppearanceActions - In the implementation block
@property (assign,nonatomic) BOOL allowsDragAndDrop;                                                       //@synthesize allowsDragAndDrop=_allowsDragAndDrop - In the implementation block
@property (assign,nonatomic) BOOL allowsSwipeToSelect;                                                     //@synthesize allowsSwipeToSelect=_allowsSwipeToSelect - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode;                                                           //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                        //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) long long oneUpPresentationOrigin;                                            //@synthesize oneUpPresentationOrigin=_oneUpPresentationOrigin - In the implementation block
@property (nonatomic,retain) id<PXPhotosGridOptionsController> optionsController;                          //@synthesize optionsController=_optionsController - In the implementation block
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;                                //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
-(BOOL)wantsContentFilterVisible;
-(long long)navBarStyle;
-(void)setWantsDimmedSelectionStyle:(BOOL)arg1 ;
-(unsigned long long)allowedActions;
-(PXLoadingStatusManager *)loadingStatusManager;
-(BOOL)allowsInteractiveFavoriteBadges;
-(BOOL)allowsGridAppearanceActions;
-(PXSectionedSelectionManager *)selectionManager;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(NSString *)footerSubtitle;
-(BOOL)wantsCPLStatus;
-(id<PXPhotosGridOptionsController>)optionsController;
-(void)setWantsContentFilterVisible:(BOOL)arg1 ;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(void)setNavBarStyle:(long long)arg1 ;
-(PXMediaProvider *)mediaProvider;
-(PXAssetActionManager *)assetActionManager;
-(BOOL)wantsDimmedSelectionStyle;
-(void)setForbiddenBadges:(unsigned long long)arg1 ;
-(BOOL)wantsModernNavBarButtons;
-(long long)contentMode;
-(void)setAllowsInteractiveFavoriteBadges:(BOOL)arg1 ;
-(BOOL)wantsTabBarHidden;
-(unsigned long long)forbiddenBadges;
-(id)init;
-(id<PXPhotosViewDelegate>)delegate;
-(void)setAllowsSwipeToSelect:(BOOL)arg1 ;
-(void)setSectionBodyStyle:(long long)arg1 ;
-(unsigned long long)allowedBehaviors;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAllowsCaptions:(BOOL)arg1 ;
-(void)setFooterVisibilityStyle:(long long)arg1 ;
-(void)setSectionHeaderStyle:(long long)arg1 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(BOOL)allowsDragAndDrop;
-(void)setSummaryStyle:(long long)arg1 ;
-(BOOL)allowsCaptions;
-(void)setOneUpPresentationOrigin:(long long)arg1 ;
-(void)setDelegate:(id<PXPhotosViewDelegate>)arg1 ;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(void)setAllowsGridAppearanceActions:(BOOL)arg1 ;
-(BOOL)startsInSelectMode;
-(void)setWantsModernNavBarButtons:(BOOL)arg1 ;
-(BOOL)allowsSwipeToSelect;
-(void)setWantsCPLStatus:(BOOL)arg1 ;
-(void)setFooterSubtitle:(NSString *)arg1 ;
-(long long)sectionBodyStyle;
-(long long)oneUpPresentationOrigin;
-(long long)summaryStyle;
-(void)setAllowsDragAndDrop:(BOOL)arg1 ;
-(long long)footerVisibilityStyle;
-(long long)sectionHeaderStyle;
-(BOOL)lowMemoryMode;
-(void)setWantsTabBarHidden:(BOOL)arg1 ;
-(void)setOptionsController:(id<PXPhotosGridOptionsController>)arg1 ;
-(void)setAllowedBehaviors:(unsigned long long)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3 assetActionManager:(id)arg4 assetCollectionActionManager:(id)arg5 ;
-(void)setAllowedActions:(unsigned long long)arg1 ;
-(void)setStartsInSelectMode:(BOOL)arg1 ;
@end


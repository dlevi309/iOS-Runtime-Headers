/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@protocol PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;
@class PXCMMViewModel, NSArray, PXMomentShareStatusPresentation, PXCMMPosterBannerView, PXCMMPeopleSuggestionsMediaProvider, PXCMMPeopleSuggestionsDataSourceManager, NSString, UIView;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile> {

	unsigned long long _activityType;
	unsigned long long _sourceType;
	PXCMMViewModel* _viewModel;
	id<PXAssetImportStatusManager> _importStatusManager;
	NSArray* _localizedNames;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXCMMBannerTileControllerDelegate> _delegate;
	PXCMMPosterBannerView* _bannerView;
	PXCMMPeopleSuggestionsMediaProvider* _peopleSuggestionsMediaProvider;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;

}

@property (nonatomic,retain) PXCMMPosterBannerView * bannerView;                                                        //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsMediaProvider * peopleSuggestionsMediaProvider;                      //@synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;              //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMBannerTileControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)new;
-(void)becomeReusable;
-(void)setPeopleSuggestionsDataSourceManager:(PXCMMPeopleSuggestionsDataSourceManager *)arg1 ;
-(id)init;
-(id<PXCMMBannerTileControllerDelegate>)delegate;
-(void)setBannerView:(PXCMMPosterBannerView *)arg1 ;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXCMMPeopleSuggestionsMediaProvider *)peopleSuggestionsMediaProvider;
-(void)setDelegate:(id<PXCMMBannerTileControllerDelegate>)arg1 ;
-(void)_updateLoadingPeopleSuggestions;
-(UIView *)view;
-(id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5 ;
-(void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_configureBannerViewActionButtonWithTitle:(id)arg1 ;
-(void)_updatePeopleSuggestionNames;
-(void)_updateContainsUnverifierPersons;
-(void)_updateLocalizedNamesByViewModel;
-(void)setPeopleSuggestionsMediaProvider:(PXCMMPeopleSuggestionsMediaProvider *)arg1 ;
-(void)_updateCounts;
-(void)_updateBannerActionButton;
-(PXCMMPosterBannerView *)bannerView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end


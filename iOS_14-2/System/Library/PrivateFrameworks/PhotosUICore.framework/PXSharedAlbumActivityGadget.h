/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PXFeedAssetsSectionInfo, _PXSharedAlbumActivityGadgetContentView, PXSharedAlbumHeaderView, PXAssetCollageView, UILabel, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXAssetReference, NSArray, NSAttributedString, NSSet, NSString;

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget> {

	BOOL _wasAskedToLoadContentData;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXFeedAssetsSectionInfo* _assetsSectionInfo;
	_PXSharedAlbumActivityGadgetContentView* _contentView;
	PXSharedAlbumHeaderView* _headerView;
	PXAssetCollageView* _collageView;
	UILabel* _captionLabel;
	PXPhotoKitAssetsDataSourceManager* _assetsDataSourceManager;
	PXPhotoKitUIMediaProvider* _mediaProvider;
	PXAssetReference* _currentAssetReference;
	NSArray* _assets;
	NSAttributedString* _caption;
	NSSet* _oneUpHiddenAssetReferences;
	CGRect _visibleContentRect;

}

@property (nonatomic,readonly) BOOL isContentViewLoaded; 
@property (nonatomic,retain) _PXSharedAlbumActivityGadgetContentView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) PXSharedAlbumHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PXAssetCollageView * collageView;                                         //@synthesize collageView=_collageView - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                                                   //@synthesize captionLabel=_captionLabel - In the implementation block
@property (assign,nonatomic) BOOL wasAskedToLoadContentData;                                           //@synthesize wasAskedToLoadContentData=_wasAskedToLoadContentData - In the implementation block
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotoKitUIMediaProvider * mediaProvider;                                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXAssetReference * currentAssetReference;                                 //@synthesize currentAssetReference=_currentAssetReference - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSAttributedString * caption;                                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSSet * oneUpHiddenAssetReferences;                                         //@synthesize oneUpHiddenAssetReferences=_oneUpHiddenAssetReferences - In the implementation block
@property (nonatomic,retain) PXFeedAssetsSectionInfo * assetsSectionInfo;                              //@synthesize assetsSectionInfo=_assetsSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                                //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(void)preloadResources;
-(void)setMediaProvider:(PXPhotoKitUIMediaProvider *)arg1 ;
-(NSArray *)assets;
-(PXGadgetSpec *)gadgetSpec;
-(void)contentViewDidDisappear;
-(unsigned long long)gadgetCapabilities;
-(PXPhotoKitUIMediaProvider *)mediaProvider;
-(unsigned long long)gadgetType;
-(PXPhotoKitAssetsDataSourceManager *)assetsDataSourceManager;
-(void)contentViewWillAppear;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHeaderView:(PXSharedAlbumHeaderView *)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(NSAttributedString *)caption;
-(void)setCaption:(NSAttributedString *)arg1 ;
-(void)setCurrentAssetReference:(PXAssetReference *)arg1 ;
-(id)init;
-(void)setAssetsDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(PXAssetReference *)currentAssetReference;
-(void)_layoutContentView;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)userDidSelectGadget;
-(id)uniqueGadgetIdentifier;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(PXAssetCollageView *)collageView;
-(void)setAssetsSectionInfo:(PXFeedAssetsSectionInfo *)arg1 ;
-(void)_updateCollageViewVideoEnabled;
-(void)setOneUpHiddenAssetReferences:(NSSet *)arg1 ;
-(void)_updateCollageViewHiddenAssets;
-(void)_loadContentFromSectionInfo;
-(void)_loadAssets;
-(BOOL)isContentViewLoaded;
-(void)_updateCollageView;
-(unsigned long long)_numberOfLinesForCaption;
-(BOOL)_isAccessibilityContentSize;
-(void)_loadCaption;
-(void)_handleActionTap:(id)arg1 ;
-(void)_handleCollageViewTap:(id)arg1 ;
-(void)_navigateToAssetView:(id)arg1 ;
-(PXFeedAssetsSectionInfo *)assetsSectionInfo;
-(void)setCollageView:(PXAssetCollageView *)arg1 ;
-(BOOL)wasAskedToLoadContentData;
-(void)setWasAskedToLoadContentData:(BOOL)arg1 ;
-(NSSet *)oneUpHiddenAssetReferences;
-(CGRect)visibleContentRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(_PXSharedAlbumActivityGadgetContentView *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(UILabel *)captionLabel;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(PXSharedAlbumHeaderView *)headerView;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(_PXSharedAlbumActivityGadgetContentView *)contentView;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)dealloc;
@end


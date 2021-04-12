/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXDisplaySuggestion, PXDisplayAsset;
@class NSString, PXUIMediaProvider, PXGadgetSpec, PXDisplayAssetUIView, PXUIAssetBadgeView, UILabel, PXRoundedCornerOverlayView, UIImage, NSError;

@interface PXForYouSuggestionGadgetContentView : UIView <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _forceAssetContentReload;
	BOOL _assetContentHidden;
	BOOL _blursDegradedContent;
	id<PXDisplaySuggestion> _suggestion;
	id<PXDisplayAsset> _keyAsset;
	NSString* _title;
	NSString* _subtitle;
	PXUIMediaProvider* _mediaProvider;
	PXGadgetSpec* _gadgetSpec;
	long long _mode;
	PXDisplayAssetUIView* _assetView;
	PXUIAssetBadgeView* _badgeView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXRoundedCornerOverlayView* _roundedOverlayView;
	NSString* _caption;
	unsigned long long _badgeTypes;

}

@property (nonatomic,retain) PXDisplayAssetUIView * assetView;                             //@synthesize assetView=_assetView - In the implementation block
@property (nonatomic,retain) PXUIAssetBadgeView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedOverlayView;              //@synthesize roundedOverlayView=_roundedOverlayView - In the implementation block
@property (nonatomic,copy) NSString * caption;                                             //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) unsigned long long badgeTypes;                                //@synthesize badgeTypes=_badgeTypes - In the implementation block
@property (nonatomic,retain) id<PXDisplaySuggestion> suggestion;                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                  //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) PXUIMediaProvider * mediaProvider;                            //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                    //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) CGRect assetContentsRect; 
@property (nonatomic,readonly) UIImage * currentAssetImage; 
@property (assign,nonatomic) BOOL assetContentHidden;                                      //@synthesize assetContentHidden=_assetContentHidden - In the implementation block
@property (assign,nonatomic) long long mode;                                               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL blursDegradedContent;                                    //@synthesize blursDegradedContent=_blursDegradedContent - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingFullQualityContent; 
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)darkPlaceholderFilters;
+(id)lightPlaceholderFilters;
+(CGSize)sizeThatFits:(CGSize)arg1 withSuggestion:(id)arg2 title:(id)arg3 subtitle:(id)arg4 ;
+(double)scaledSuggestionBaselineDistance;
+(id)suggestionLabelFont;
+(double)scaledTitleBaselineDistance;
+(double)scaledTitleWithSuggestionBaselineDistance;
+(double)scaledSubtitleBaselineDistance;
+(id)titleLabelFont;
+(id)_gaussianBlurFilter;
+(void)preloadResources;
-(UILabel *)titleLabel;
-(void)setMediaProvider:(PXUIMediaProvider *)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PXUIMediaProvider *)mediaProvider;
-(long long)mode;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(NSString *)caption;
-(PXUIAssetBadgeView *)badgeView;
-(void)setCaption:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXDisplayAsset>)keyAsset;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setBadgeView:(PXUIAssetBadgeView *)arg1 ;
-(NSString *)subtitle;
-(BOOL)isDisplayingFullQualityContent;
-(void)setTitle:(NSString *)arg1 ;
-(id<PXDisplaySuggestion>)suggestion;
-(void)_updateIfNeeded;
-(void)setMode:(long long)arg1 ;
-(PXRoundedCornerOverlayView *)roundedOverlayView;
-(NSError *)error;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PXDisplayAssetUIView *)assetView;
-(CGRect)_assetFrameInBounds:(CGRect)arg1 ;
-(CGSize)_calculateLayoutWithInputSize:(CGSize)arg1 apply:(BOOL)arg2 ;
-(CGRect)assetContentBoundsInCoordinateSpace:(id)arg1 ;
-(UIImage *)currentAssetImage;
-(void)setBlursDegradedContent:(BOOL)arg1 ;
-(void)setAssetContentHidden:(BOOL)arg1 ;
-(void)setBadgeTypes:(unsigned long long)arg1 ;
-(void)setAssetView:(PXDisplayAssetUIView *)arg1 ;
-(void)_updateBadgeViews;
-(void)_updateAssetView;
-(void)_updateAssetViewAnimatedContentEnabled;
-(id)previewAssetView;
-(void)_updateAssetViewPlaceholderFilters;
-(void)_updateTitleFont;
-(void)_updateBadgeContents;
-(void)_handleChangedAsset:(id)arg1 ;
-(BOOL)assetContentHidden;
-(BOOL)blursDegradedContent;
-(void)setRoundedOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(unsigned long long)badgeTypes;
-(CGRect)assetContentsRect;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_updateRoundedCornerOverlayView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end


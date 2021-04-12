/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXUIMediaProvider, UIColor, NSMutableDictionary, PXRoundedCornerOverlayView, NSMutableIndexSet, PXLayoutPerformerOutput;

@interface PXAssetCollageView : UIView {

	BOOL _allowVideoPlayback;
	BOOL _allowLoopPlayback;
	BOOL _allowAnimatedImagePlayback;
	PXUIMediaProvider* _mediaProvider;
	double _spacing;
	double _cornerRadius;
	UIColor* _cornerBackgroundColor;
	NSMutableDictionary* _assets;
	NSMutableDictionary* _assetViews;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	NSMutableIndexSet* _hiddenItemIndexes;
	PXLayoutPerformerOutput* _layoutOutput;

}

@property (nonatomic,readonly) NSMutableDictionary * assets;                                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetViews;                                   //@synthesize assetViews=_assetViews - In the implementation block
@property (nonatomic,readonly) PXRoundedCornerOverlayView * roundedCornerOverlayView;              //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * hiddenItemIndexes;                              //@synthesize hiddenItemIndexes=_hiddenItemIndexes - In the implementation block
@property (nonatomic,readonly) PXLayoutPerformerOutput * layoutOutput;                             //@synthesize layoutOutput=_layoutOutput - In the implementation block
@property (nonatomic,readonly) BOOL portraitBias; 
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider;                                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (assign,nonatomic) double spacing;                                                       //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * cornerBackgroundColor;                                      //@synthesize cornerBackgroundColor=_cornerBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPlayback;                                              //@synthesize allowVideoPlayback=_allowVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowLoopPlayback;                                               //@synthesize allowLoopPlayback=_allowLoopPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowAnimatedImagePlayback;                                      //@synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback - In the implementation block
+(long long)maximumNumberOfItems;
-(double)spacing;
-(NSMutableDictionary *)assets;
-(void)setSpacing:(double)arg1 ;
-(PXUIMediaProvider *)mediaProvider;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfItems;
-(void)setAllowLoopPlayback:(BOOL)arg1 ;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(BOOL)allowAnimatedImagePlayback;
-(double)cornerRadius;
-(void)layoutSubviews;
-(BOOL)allowLoopPlayback;
-(BOOL)allowVideoPlayback;
-(id)initWithCoder:(id)arg1 ;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setAllowAnimatedImagePlayback:(BOOL)arg1 ;
-(void)_updateRoundedCornerOverlayView;
-(void)setCornerBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cornerBackgroundColor;
-(void)setAllowVideoPlayback:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mediaProvider:(id)arg2 ;
-(void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setHidden:(BOOL)arg1 forItemAtIndex:(long long)arg2 ;
-(void)resetViewState;
-(id)displayAssetViewWithAsset:(id)arg1 ;
-(id)displayAssetViewAtPoint:(CGPoint)arg1 ;
-(void)_updateHiddenViews;
-(id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2 ;
-(void)_updateAssetViewsAnimatedContentEnabled;
-(id)_displayAssetViews;
-(id)_displayAssetViewWithIndex:(long long)arg1 ;
-(NSMutableDictionary *)assetViews;
-(double)_firstAssetAspectRatio;
-(void)_removeAssetView:(id)arg1 ;
-(void)_removeAllAssetViews;
-(NSMutableIndexSet *)hiddenItemIndexes;
-(BOOL)portraitBias;
@end


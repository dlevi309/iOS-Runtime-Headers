/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class PXUpdater, UIView, PXCMMTranscriptBubbleFooterView, PXCMMPosterHeaderView, PXCMMSpec, NSString;

@interface PXCMMTranscriptBubbleView : UIView {

	PXUpdater* _updater;
	UIView* _highlightView;
	PXCMMTranscriptBubbleFooterView* _footerView;
	PXCMMPosterHeaderView* _headerView;
	BOOL _highlighted;
	PXCMMSpec* _spec;
	NSString* _imageTitleText;
	NSString* _imageSubtitleText;
	NSString* _primaryText;
	NSString* _secondaryText;
	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;
	UIEdgeInsets _bubbleSafeAreaInsets;

}

@property (nonatomic,retain) PXCMMSpec * spec;                                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bubbleSafeAreaInsets;                  //@synthesize bubbleSafeAreaInsets=_bubbleSafeAreaInsets - In the implementation block
@property (nonatomic,copy) NSString * imageTitleText;                            //@synthesize imageTitleText=_imageTitleText - In the implementation block
@property (nonatomic,copy) NSString * imageSubtitleText;                         //@synthesize imageSubtitleText=_imageSubtitleText - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                               //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                             //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withSpec:(id)arg2 ;
-(void)setSpec:(PXCMMSpec *)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(void)_updateFooterView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id<PXDisplayAsset>)asset;
-(void)_updateHighlightView;
-(PXCMMSpec *)spec;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryText;
-(BOOL)isHighlighted;
-(void)setPrimaryText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(CGSize)_performLayoutInSize:(CGSize)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(BOOL)_wantsHighlightView;
-(void)_updatePosterView;
-(void)setImageTitleText:(NSString *)arg1 ;
-(void)setImageSubtitleText:(NSString *)arg1 ;
-(NSString *)imageTitleText;
-(NSString *)imageSubtitleText;
-(UIEdgeInsets)bubbleSafeAreaInsets;
-(void)setBubbleSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end


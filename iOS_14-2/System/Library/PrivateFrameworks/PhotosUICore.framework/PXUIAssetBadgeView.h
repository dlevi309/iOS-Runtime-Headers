/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXUIAssetBadgeViewDelegate;
@class _PXUIAssetBadgeTopGroup, _PXUIAssetBadgeImageView, UILabel;

@interface PXUIAssetBadgeView : UIView {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL _isPerformingUpdate;
	struct {
		BOOL topLeftElements;
		BOOL topRightElements;
		BOOL bottomLeadingImage;
		BOOL bottomTrailingImage;
		BOOL bottomLabel;
		BOOL background;
		BOOL contentSize;
	}  _needsUpdateFlags;
	_PXUIAssetBadgeTopGroup* _topLeftPrimaryGroup;
	_PXUIAssetBadgeTopGroup* _topLeftSecondaryGroup;
	_PXUIAssetBadgeTopGroup* _topRightGroup;
	_PXUIAssetBadgeImageView* _bottomLeadingImageView;
	_PXUIAssetBadgeImageView* _bottomTrailingImageView;
	UILabel* _bottomLabel;
	CGSize _contentSize;
	BOOL _overContent;
	id<PXUIAssetBadgeViewDelegate> _delegate;
	long long _style;
	double _contentWidth;
	CGSize _bottomElementsPadding;
	PXAssetBadgeInfo _badgeInfo;

}

@property (nonatomic,readonly) BOOL _wantsBottomLabel; 
@property (assign,nonatomic,__weak) id<PXUIAssetBadgeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) PXAssetBadgeInfo badgeInfo;                                  //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (assign,nonatomic) long long style;                                             //@synthesize style=_style - In the implementation block
@property (assign,getter=isOverContent,nonatomic) BOOL overContent;                       //@synthesize overContent=_overContent - In the implementation block
@property (assign,nonatomic) double contentWidth;                                         //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) CGSize bottomElementsPadding;                                //@synthesize bottomElementsPadding=_bottomElementsPadding - In the implementation block
+(id)measuringLabel;
+(double)preferredHeightForStyle:(long long)arg1 ;
+(void)preloadResourcesForStyle:(long long)arg1 ;
-(void)_invalidate;
-(void)_invalidateTopLeftElements;
-(void)_setBackgroundImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handleButton:(id)arg1 ;
-(id<PXUIAssetBadgeViewDelegate>)delegate;
-(BOOL)_wantsBottomLabel;
-(void)_invalidateBottomTrailingImage;
-(double)contentWidth;
-(void)_invalidateTopRightElements;
-(void)_updateBackgroundIfNeeded;
-(void)_invalidateBottomLeadingImage;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateIfNeeded;
-(BOOL)isOverContent;
-(void)prepareForReuse;
-(void)setBottomElementsPadding:(CGSize)arg1 ;
-(void)setContentWidth:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<PXUIAssetBadgeViewDelegate>)arg1 ;
-(void)_updateBottomLeadingImageIfNeeded;
-(void)layoutSubviews;
-(id)_updateTopGroup:(id)arg1 withBadgeInfo:(PXAssetBadgeInfo)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_layoutBottomCornersImages;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateBottomTrailingImageIfNeeded;
-(void)_invalidateContentSize;
-(void)_layoutBottomLabel;
-(void)_updateTopRightElementsIfNeeded;
-(void)setOverContent:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)_updateContentSizeIfNeeded;
-(void)_removeViewsFromGroup:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)_invalidateBackground;
-(void)_setNeedsUpdate;
-(PXAssetBadgeInfo)badgeInfo;
-(CGSize)bottomElementsPadding;
-(void)_updateTopLeftElementsIfNeeded;
-(long long)style;
-(void)_updateBottomLabelIfNeeded;
-(void)_layoutTopGroup:(id)arg1 ;
-(void)_invalidateBottomLabel;
@end


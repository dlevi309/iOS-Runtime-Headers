/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>

@class CALayer, VUIOverlayLayout, IKViewElement, VUILabel, VUITextBadgeView, NSArray, _TVProgressView, UIView;

@interface VUIOverlayView : UIView {

	CALayer* _gradientLayer;
	VUIOverlayLayout* _overlayLayout;
	IKViewElement* _viewElement;
	VUILabel* _titleLabel;
	IKViewElement* _titleElement;
	VUITextBadgeView* _textBadge;
	IKViewElement* _textBadgeElement;
	NSArray* _badgeViewWrappers;
	_TVProgressView* _progressView;
	UIView* _gradientView;

}

@property (nonatomic,retain) VUIOverlayLayout * overlayLayout;              //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                   //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IKViewElement * titleElement;                  //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,retain) VUITextBadgeView * textBadge;                  //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) IKViewElement * textBadgeElement;              //@synthesize textBadgeElement=_textBadgeElement - In the implementation block
@property (nonatomic,retain) NSArray * badgeViewWrappers;                   //@synthesize badgeViewWrappers=_badgeViewWrappers - In the implementation block
@property (nonatomic,retain) _TVProgressView * progressView;                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                         //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                       //@synthesize gradientLayer=_gradientLayer - In the implementation block
+(id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
+(id)overlayViewFromMediaItem:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
-(void)reset;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(CALayer *)gradientLayer;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(UIView *)gradientView;
-(void)setGradientView:(UIView *)arg1 ;
-(_TVProgressView *)progressView;
-(void)setProgressView:(_TVProgressView *)arg1 ;
-(IKViewElement *)viewElement;
-(IKViewElement *)titleElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setOverlayLayout:(VUIOverlayLayout *)arg1 ;
-(VUITextBadgeView *)textBadge;
-(VUIOverlayLayout *)overlayLayout;
-(void)setTextBadge:(VUITextBadgeView *)arg1 ;
-(NSArray *)badgeViewWrappers;
-(void)setTitleElement:(IKViewElement *)arg1 ;
-(void)setTextBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeViewWrappers:(NSArray *)arg1 ;
-(IKViewElement *)textBadgeElement;
@end


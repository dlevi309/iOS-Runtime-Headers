/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>

@class VUILabel, VUITextBadgeView, VUIProgressView, UIView, CALayer, NSArray, VUIOverlayLayout, IKViewElement;

@interface VUIOverlayView : UIView {

	BOOL _hasPageControlDisplayedOnTop;
	VUILabel* _titleLabel;
	VUITextBadgeView* _textBadge;
	VUIProgressView* _progressView;
	UIView* _gradientView;
	CALayer* _gradientLayer;
	NSArray* _badgeViewWrappers;
	VUIOverlayLayout* _overlayLayout;
	IKViewElement* _viewElement;
	IKViewElement* _titleElement;
	IKViewElement* _textBadgeElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * titleElement;                   //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,retain) IKViewElement * textBadgeElement;               //@synthesize textBadgeElement=_textBadgeElement - In the implementation block
@property (assign,nonatomic) BOOL hasPageControlDisplayedOnTop;              //@synthesize hasPageControlDisplayedOnTop=_hasPageControlDisplayedOnTop - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUITextBadgeView * textBadge;                   //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) VUIProgressView * progressView;                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                          //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,copy) NSArray * badgeViewWrappers;                      //@synthesize badgeViewWrappers=_badgeViewWrappers - In the implementation block
@property (nonatomic,retain) VUIOverlayLayout * overlayLayout;               //@synthesize overlayLayout=_overlayLayout - In the implementation block
+(BOOL)_hasPageControlDisplayedOnTopOfOverlayElement:(id)arg1 ;
+(id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
+(id)overlayViewFromMediaItem:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(CALayer *)gradientLayer;
-(void)layoutSubviews;
-(UIView *)gradientView;
-(void)reset;
-(void)setProgressView:(VUIProgressView *)arg1 ;
-(VUIProgressView *)progressView;
-(void)setGradientView:(UIView *)arg1 ;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setOverlayLayout:(VUIOverlayLayout *)arg1 ;
-(VUITextBadgeView *)textBadge;
-(VUIOverlayLayout *)overlayLayout;
-(void)setTextBadge:(VUITextBadgeView *)arg1 ;
-(void)setHasPageControlDisplayedOnTop:(BOOL)arg1 ;
-(NSArray *)badgeViewWrappers;
-(void)setTitleElement:(IKViewElement *)arg1 ;
-(void)setTextBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeViewWrappers:(NSArray *)arg1 ;
-(IKViewElement *)titleElement;
-(IKViewElement *)textBadgeElement;
-(BOOL)hasPageControlDisplayedOnTop;
@end


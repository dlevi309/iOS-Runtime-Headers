/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol LPTextStyleable;
@class LPCaptionBarStyle, LPCaptionBarPresentationProperties, LPComponentView, LPPlayButtonView, LPCaptionBarAccessoryView, LPCaptionBarButtonView, LPVerticalTextStackView, LPInlineMediaPlaybackInformation, NSString;

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {

	LPCaptionBarStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;
	LPComponentView* _leftIconView;
	LPComponentView* _rightIconView;
	LPPlayButtonView* _playButton;
	LPCaptionBarAccessoryView* _leftAccessoryView;
	LPCaptionBarAccessoryView* _rightAccessoryView;
	LPCaptionBarButtonView* _buttonView;
	LPComponentView*<LPTextStyleable> _aboveTopCaptionView;
	LPComponentView*<LPTextStyleable> _topCaptionView;
	LPComponentView*<LPTextStyleable> _bottomCaptionView;
	LPComponentView*<LPTextStyleable> _belowBottomCaptionView;
	LPVerticalTextStackView* _textStackView;
	LPInlineMediaPlaybackInformation* _inlinePlaybackInformation;
	BOOL _hasEverBuilt;
	BOOL _useProgressSpinner;
	UIEdgeInsets _textSafeAreaInset;

}

@property (assign,nonatomic) BOOL useProgressSpinner;                     //@synthesize useProgressSpinner=_useProgressSpinner - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textSafeAreaInset;              //@synthesize textSafeAreaInset=_textSafeAreaInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)button;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)layoutComponentView;
-(id)init;
-(void)animateOut;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2 ;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 ;
-(void)setUseProgressSpinner:(BOOL)arg1 ;
-(void)setPlaybackInformation:(id)arg1 ;
-(void)setTextSafeAreaInset:(UIEdgeInsets)arg1 ;
-(void)_buildViewsForCaptionBarIfNeeded;
-(CGSize)_layoutCaptionBarForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(BOOL)useProgressSpinner;
-(UIEdgeInsets)textSafeAreaInset;
@end


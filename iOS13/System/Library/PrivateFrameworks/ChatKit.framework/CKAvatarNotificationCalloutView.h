/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CKAvatarNotificationCalloutViewDelegate;
@class UITextView, UIImageView, CAAnimation, UITapGestureRecognizer, NSString;

@interface CKAvatarNotificationCalloutView : UIView <CAAnimationDelegate> {

	id<CKAvatarNotificationCalloutViewDelegate> _delegate;
	UITextView* _textView;
	UIImageView* _tailImageView;
	CAAnimation* _starterAniamtion;
	CAAnimation* _finisherAnimation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _mode;

}

@property (nonatomic,retain) UITextView * textView;                                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIImageView * tailImageView;                                              //@synthesize tailImageView=_tailImageView - In the implementation block
@property (nonatomic,retain) CAAnimation * starterAniamtion;                                           //@synthesize starterAniamtion=_starterAniamtion - In the implementation block
@property (nonatomic,retain) CAAnimation * finisherAnimation;                                          //@synthesize finisherAnimation=_finisherAnimation - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<CKAvatarNotificationCalloutViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKAvatarNotificationCalloutViewDelegate>)delegate;
-(void)setDelegate:(id<CKAvatarNotificationCalloutViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldShowShadow;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animateIn;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)animateOut;
-(void)setTailImageView:(UIImageView *)arg1 ;
-(UIImageView *)tailImageView;
-(void)setStarterAniamtion:(CAAnimation *)arg1 ;
-(void)setFinisherAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)starterAniamtion;
-(CAAnimation *)finisherAnimation;
-(id)initWithFrame:(CGRect)arg1 previewText:(id)arg2 mode:(long long)arg3 ;
@end


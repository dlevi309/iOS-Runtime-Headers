/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXToastViewControllerDelegate;
@class NSString, UIImage, PXToastPresentationWindow, UILabel, UIImageView, UIVisualEffectView, CAShapeLayer, UINotificationFeedbackGenerator;

@interface PXToastViewController : UIViewController {

	BOOL _shouldUseAnimatedCheckmark;
	id<PXToastViewControllerDelegate> _delegate;
	NSString* _message;
	UIImage* _image;
	PXToastPresentationWindow* _presentationWindow;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _imageView;
	UIVisualEffectView* _toastView;
	CAShapeLayer* _checkLayer;
	UINotificationFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) PXToastPresentationWindow * presentationWindow;                   //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                           //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                         //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAnimatedCheckmark;                                  //@synthesize shouldUseAnimatedCheckmark=_shouldUseAnimatedCheckmark - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * toastView;                                   //@synthesize toastView=_toastView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * checkLayer;                                        //@synthesize checkLayer=_checkLayer - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<PXToastViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message;                                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
+(id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2 ;
+(id)_secondaryLabelFont;
+(id)_primaryLabelFont;
+(id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 ;
+(id)_fontWithSize:(double)arg1 textStyleAttribute:(CFStringRef)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setFeedbackGenerator:(UINotificationFeedbackGenerator *)arg1 ;
-(void)setPresentationWindow:(PXToastPresentationWindow *)arg1 ;
-(NSString *)message;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(id<PXToastViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(UINotificationFeedbackGenerator *)feedbackGenerator;
-(UIImage *)image;
-(void)presentOnWindowScene:(id)arg1 ;
-(UILabel *)primaryLabel;
-(void)setDelegate:(id<PXToastViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UIVisualEffectView *)toastView;
-(id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 ;
-(id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_dismissAfterDelay:(double)arg1 ;
-(void)_animateCheckMark;
-(BOOL)shouldUseAnimatedCheckmark;
-(void)setShouldUseAnimatedCheckmark:(BOOL)arg1 ;
-(void)setToastView:(UIVisualEffectView *)arg1 ;
-(CAShapeLayer *)checkLayer;
-(void)setCheckLayer:(CAShapeLayer *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)secondaryLabel;
-(PXToastPresentationWindow *)presentationWindow;
@end


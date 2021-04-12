/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSString, SKUIToastPresentationWindow, UILabel, UIImageView, UIVisualEffectView;

@interface SKUIToastViewController : UIViewController {

	NSString* _titleText;
	NSString* _descriptionText;
	SKUIToastPresentationWindow* _presentationWindow;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _imageView;
	UIVisualEffectView* _toastView;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * titleText;                                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                      //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) SKUIToastPresentationWindow * presentationWindow;              //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                        //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * toastView;                                //@synthesize toastView=_toastView - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
+(id)_primaryLabelFont;
+(id)_secondaryLabelFont;
+(id)_fontWithSize:(double)arg1 textStyleAttribute:(CFStringRef)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(UIImageView *)imageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)present;
-(void)viewDidLayoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setPresentationWindow:(SKUIToastPresentationWindow *)arg1 ;
-(SKUIToastPresentationWindow *)presentationWindow;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)toastView;
-(void)_dismissWithDelay:(double)arg1 ;
-(id)initWithDialogTemplate:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setToastView:(UIVisualEffectView *)arg1 ;
@end


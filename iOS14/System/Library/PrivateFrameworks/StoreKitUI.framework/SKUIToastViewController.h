/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_secondaryLabelFont;
+(id)_primaryLabelFont;
+(id)_fontWithSize:(double)arg1 textStyleAttribute:(CFStringRef)arg2 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setPresentationWindow:(SKUIToastPresentationWindow *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(UIImageView *)imageView;
-(void)present;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(id)completion;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)primaryLabel;
-(void)viewDidLoad;
-(UIVisualEffectView *)toastView;
-(void)setToastView:(UIVisualEffectView *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)secondaryLabel;
-(id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(SKUIToastPresentationWindow *)presentationWindow;
-(void)_dismissWithDelay:(double)arg1 ;
-(id)initWithDialogTemplate:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


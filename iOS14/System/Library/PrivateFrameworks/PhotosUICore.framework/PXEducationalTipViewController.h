/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class UIVisualEffectView, UIImageView, UILabel, UIButton, UIImage, NSString;

@interface PXEducationalTipViewController : UIViewController {

	UIVisualEffectView* _visualEffectView;
	UIImageView* _imageView;
	UILabel* _messageLabel;
	UIButton* _dismissButton;
	UIImage* _image;
	NSString* _message;
	NSString* _dismissButtonTitle;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,copy) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) id dismissHandler;                          //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_invalidateContent;
-(void)_handleDismissButton:(id)arg1 ;
-(UIImage *)image;
-(id)dismissHandler;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
@end


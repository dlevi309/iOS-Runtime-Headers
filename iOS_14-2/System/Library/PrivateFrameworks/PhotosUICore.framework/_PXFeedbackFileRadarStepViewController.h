/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface _PXFeedbackFileRadarStepViewController : UIViewController {

	NSString* _messageTitle;
	NSString* _message;
	NSString* _buttonTitle;
	/*^block*/id _buttonActionHandler;

}

@property (nonatomic,copy) NSString * messageTitle;              //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;               //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id buttonActionHandler;               //@synthesize buttonActionHandler=_buttonActionHandler - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)message;
-(void)viewDidLoad;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(id)buttonActionHandler;
-(void)setButtonActionHandler:(id)arg1 ;
@end


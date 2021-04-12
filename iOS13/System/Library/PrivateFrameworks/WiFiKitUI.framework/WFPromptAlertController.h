/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIAlertController.h>

@interface WFPromptAlertController : UIAlertController {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)promptAlertControllerWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 successTitle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end


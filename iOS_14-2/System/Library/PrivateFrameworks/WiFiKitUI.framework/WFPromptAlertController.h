/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIAlertController.h>

@interface WFPromptAlertController : UIAlertController {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)promptAlertControllerWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 successTitle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end


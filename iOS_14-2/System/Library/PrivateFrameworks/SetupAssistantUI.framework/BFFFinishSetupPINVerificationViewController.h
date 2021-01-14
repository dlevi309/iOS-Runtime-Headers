/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <Preferences/DevicePINSetupController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class NSString;

@interface BFFFinishSetupPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)stringsBundle;
-(void)didCancelEnteringPIN;
-(void)loadView;
-(void)didAcceptEnteredPIN:(id)arg1 ;
@end


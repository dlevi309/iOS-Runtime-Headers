/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/BFFFaceIDViewController.h>
#import <libobjc.A.dylib/BFFFaceIDViewControllerDelegate.h>

@class NSString;

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate> {

	NSString* _passcode;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * passcode;              //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) id completion;                    //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(id)completion;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(id)passcodeForFaceIDViewController:(id)arg1 ;
-(void)faceIDViewController:(id)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(id)arg3 ;
@end


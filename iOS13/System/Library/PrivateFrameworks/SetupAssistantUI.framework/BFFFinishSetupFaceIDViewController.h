/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(id)passcodeForFaceIDViewController:(id)arg1 ;
-(void)faceIDViewController:(id)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(id)arg3 ;
@end


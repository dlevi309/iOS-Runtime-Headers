/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFMyriadEmergencyDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject;

@interface AFMyriadEmergencyManager : NSObject {

	id<AFMyriadEmergencyDelegate> _delegate;
	CFNotificationCenterRef _center;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _handled;
	BOOL _informed;

}
+(id)currentManager;
-(void)informDelegateEmergencyHandled;
-(void)informDelegateEmergencyNotHandled;
-(void)_createDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)initiateEmergencyCallMyriad;
@end


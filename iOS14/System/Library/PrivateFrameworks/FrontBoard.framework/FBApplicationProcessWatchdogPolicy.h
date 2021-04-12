/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessWatchdogProviding.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSString;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {

	double _deviceLaunchScale;
	double _deviceResumeScale;
	double _additionalFirstPartyScale;
	BOOL _enableThirdPartyPre9;
	int _daNotificationToken;
	NSDictionary* _watchdogPolicyExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_defaultLaunchScale;
+(double)_defaultResumeScale;
+(double)_scaleForGestaltKey:(CFStringRef)arg1 ;
+(id)defaultPolicy;
+(double)_defaultFirstPartyAdditionalScale;
-(id)init;
-(void)_queue_reloadDefaultSettings;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(double)_queue_watchdogScalingFactorForAppInfo:(id)arg1 isResume:(BOOL)arg2 ;
-(void)dealloc;
@end


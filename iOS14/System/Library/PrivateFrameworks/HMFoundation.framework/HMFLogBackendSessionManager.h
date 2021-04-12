/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/_HMFLogBackendSessionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFRTCSessionFactory;
@class NSPointerArray, NSMutableArray, NSString;

@interface HMFLogBackendSessionManager : NSObject <_HMFLogBackendSessionDelegate, HMFLogging> {

	os_unfair_lock_s _lock;
	NSPointerArray* _activeSessions;
	NSMutableArray* _queuedSessions;
	id<HMFRTCSessionFactory> _rtcFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedSessionManager;
-(id)init;
-(id)initWithFactory:(id)arg1 ;
-(void)didCompleteActiveSession;
-(void)__sendMetaEventWithName:(id)arg1 correspondingServiceName:(id)arg2 ;
-(id)logBackendSessionWithServiceName:(id)arg1 ;
@end


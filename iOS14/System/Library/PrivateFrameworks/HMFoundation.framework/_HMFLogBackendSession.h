/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFLogBackendSession.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFLogBackendSessionDelegate;
@class NSString, NSMutableArray, RTCReporting;

@interface _HMFLogBackendSession : NSObject <HMFLogBackendSession, HMFLogging> {

	os_unfair_lock_s _lock;
	NSMutableArray* _queuedEvents;
	RTCReporting* _session;
	NSString* _serviceName;
	id<_HMFLogBackendSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HMFLogBackendSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                       //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)sendMessage:(id)arg1 ;
-(id<_HMFLogBackendSessionDelegate>)delegate;
-(void)setDelegate:(id<_HMFLogBackendSessionDelegate>)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(void)_flushQueuedEvents;
-(id)initWithSession:(id)arg1 serviceName:(id)arg2 delegate:(id)arg3 ;
-(void)activateWithSession:(id)arg1 ;
@end


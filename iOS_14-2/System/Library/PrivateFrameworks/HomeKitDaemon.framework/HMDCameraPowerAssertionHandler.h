/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging> {

	unsigned _powerAssertion;
	NSMutableSet* _currentRequestHandlerSessionIDs;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableSet * currentRequestHandlerSessionIDs;              //@synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned powerAssertion;                                       //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(unsigned)powerAssertion;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)setPowerAssertion:(unsigned)arg1 ;
-(void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2 ;
-(void)deregisterRemoteRequestHandler:(id)arg1 ;
-(NSMutableSet *)currentRequestHandlerSessionIDs;
@end


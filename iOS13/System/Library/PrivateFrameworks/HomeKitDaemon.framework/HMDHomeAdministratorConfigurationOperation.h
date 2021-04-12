/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFMessage, HMDHome, NSString;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging> {

	BOOL _shouldSuspendSyncing;
	HMFMessage* _message;
	HMDHome* _home;
	/*^block*/id _sendCompletionBlock;
	/*^block*/id _responseHandler;

}

@property (readonly) HMFMessage * message;                          //@synthesize message=_message - In the implementation block
@property (__weak,readonly) HMDHome * home;                         //@synthesize home=_home - In the implementation block
@property (assign) BOOL shouldSuspendSyncing;                       //@synthesize shouldSuspendSyncing=_shouldSuspendSyncing - In the implementation block
@property (copy) id sendCompletionBlock;                            //@synthesize sendCompletionBlock=_sendCompletionBlock - In the implementation block
@property (copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)timeout;
+(id)logCategory;
-(void)main;
-(HMFMessage *)message;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)messageDispatcher;
-(id)sendCompletionBlock;
-(void)setSendCompletionBlock:(id)arg1 ;
-(id)initWithMessage:(id)arg1 home:(id)arg2 ;
-(BOOL)shouldSuspendSyncing;
-(void)setShouldSuspendSyncing:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(double)timeout;
-(HMFMessage *)message;
-(id)logIdentifier;
-(id)messageDispatcher;
-(id)responseHandler;
-(void)main;
-(void)setResponseHandler:(id)arg1 ;
-(HMDHome *)home;
-(id)sendCompletionBlock;
-(void)setSendCompletionBlock:(id)arg1 ;
-(id)initWithMessage:(id)arg1 home:(id)arg2 ;
-(BOOL)shouldSuspendSyncing;
-(void)setShouldSuspendSyncing:(BOOL)arg1 ;
@end


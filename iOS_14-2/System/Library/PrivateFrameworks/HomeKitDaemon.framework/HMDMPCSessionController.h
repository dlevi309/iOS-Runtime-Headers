/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue, HMDLogEventDispatcher;

@interface HMDMPCSessionController : HMFObject {

	NSOperationQueue* _speakerGroupCommandOperationQueue;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (nonatomic,readonly) NSOperationQueue * speakerGroupCommandOperationQueue;              //@synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue - In the implementation block
@property (nonatomic,readonly) HMDLogEventDispatcher * logEventDispatcher;                        //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithLogEventDispatcher:(id)arg1 ;
-(void)executeSessionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)speakerGroupCommandOperationQueue;
@end


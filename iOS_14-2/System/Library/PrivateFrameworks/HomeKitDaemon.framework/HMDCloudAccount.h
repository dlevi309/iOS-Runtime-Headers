/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface HMDCloudAccount : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	NSOperationQueue* _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSOperationQueue *)queue;
-(id)initWithClientQueue:(id)arg1 ;
-(void)addAccountOperation:(/*^block*/id)arg1 ;
@end


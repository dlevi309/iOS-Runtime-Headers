/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSOperationQueue *)queue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)initWithClientQueue:(id)arg1 ;
-(void)addAccountOperation:(/*^block*/id)arg1 ;
@end


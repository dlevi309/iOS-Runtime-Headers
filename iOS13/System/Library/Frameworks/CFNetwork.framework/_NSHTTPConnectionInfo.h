/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSOperationQueue;

@interface _NSHTTPConnectionInfo : NSObject {

	HTTPConnectionInfo* _httpConnectionInfo;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* __delegateQueue;

}

@property (nonatomic,retain) NSOperationQueue * _delegateQueue;              //@synthesize _delegateQueue=__delegateQueue - In the implementation block
@property (readonly) BOOL isValid; 
-(BOOL)isValid;
-(NSOperationQueue *)_delegateQueue;
-(void)invalidateUnderlyingConnection;
-(id)initWithHTTPConnectionInfo:(HTTPConnectionInfo*)arg1 queue:(id)arg2 ;
-(void)sendPingWithReceiveHandler:(/*^block*/id)arg1 ;
-(void)set_delegateQueue:(NSOperationQueue *)arg1 ;
@end


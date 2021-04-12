/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@protocol OS_dispatch_queue;
@class FMNSXPCConnection, NSObject, NSString;

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting> {

	FMNSXPCConnection* _connection;
	/*^block*/id _didInvalidate;
	/*^block*/id _failureBlock;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) FMNSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id failureBlock;                                         //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) id didInvalidate;                                        //@synthesize didInvalidate=_didInvalidate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)_invalidate;
-(id)remoteObjectProxy;
-(FMNSXPCConnection *)connection;
-(void)setConnection:(FMNSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(id)initWithFMNSXPCConnection:(id)arg1 ;
-(id)didInvalidate;
-(void)setDidInvalidate:(id)arg1 ;
@end


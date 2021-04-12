/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(id)remoteObjectProxy;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(FMNSXPCConnection *)connection;
-(void)setFailureBlock:(id)arg1 ;
-(void)invalidate;
-(id)didInvalidate;
-(id)failureBlock;
-(void)setConnection:(FMNSXPCConnection *)arg1 ;
-(id)initWithFMNSXPCConnection:(id)arg1 ;
-(void)setDidInvalidate:(id)arg1 ;
@end


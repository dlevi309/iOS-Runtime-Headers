/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@class NSXPCConnection, FMFuture, NSString;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting> {

	BOOL __testMockConnection;
	NSXPCConnection* _connection;
	FMFuture* _future;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) FMFuture * future;                         //@synthesize future=_future - In the implementation block
@property (assign,nonatomic) BOOL _testMockConnection;                  //@synthesize _testMockConnection=__testMockConnection - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(long long)state;
-(id)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(FMFuture *)future;
-(void)setFuture:(FMFuture *)arg1 ;
-(void)destroyXPCConnection;
-(id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2 ;
-(BOOL)_testMockConnection;
-(void)set_testMockConnection:(BOOL)arg1 ;
@end


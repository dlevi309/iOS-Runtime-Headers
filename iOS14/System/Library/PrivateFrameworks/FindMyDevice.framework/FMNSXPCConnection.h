/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remoteObjectProxy;
-(void)destroyXPCConnection;
-(FMFuture *)future;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setFuture:(FMFuture *)arg1 ;
-(long long)state;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2 ;
-(BOOL)_testMockConnection;
-(void)set_testMockConnection:(BOOL)arg1 ;
-(void)dealloc;
@end


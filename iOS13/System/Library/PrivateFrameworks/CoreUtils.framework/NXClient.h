/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface NXClient : NSObject <CUXPCCodable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	unsigned char _flags;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned char flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned char)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)setClientID:(unsigned)arg1 ;
-(unsigned)clientID;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)_ensureXPCStarted;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


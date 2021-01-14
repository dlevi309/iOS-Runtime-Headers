/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)clientID;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned char)flags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)_ensureXPCStarted;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(id)description;
-(void)_interrupted;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(void)_invalidated;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(void)liveActionPerform:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


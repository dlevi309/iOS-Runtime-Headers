/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCIPCConnection.h>

@class NSXPCConnection, NSArray;

@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection> {

	AB _invalid;
	NSXPCConnection* _connection;
	NSArray* _interruptionHandlers;
	NSArray* _invalidationHandlers;

}

@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (copy) NSArray * interruptionHandlers;                           //@synthesize interruptionHandlers=_interruptionHandlers - In the implementation block
@property (copy) NSArray * invalidationHandlers;                           //@synthesize invalidationHandlers=_invalidationHandlers - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
-(void)suspend;
-(BOOL)isInvalid;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(NSArray *)invalidationHandlers;
-(id)debugDescription;
-(id)description;
-(NSXPCConnection *)connection;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1 ;
-(id)addInterruptionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)redactedDescription;
-(void)resume;
-(NSArray *)interruptionHandlers;
-(void)setInvalidationHandlers:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)addInvalidationHandler:(/*^block*/id)arg1 ;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandlers:(NSArray *)arg1 ;
-(BOOL)isEqualToConnection:(id)arg1 ;
@end


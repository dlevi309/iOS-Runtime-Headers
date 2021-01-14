/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@class ClientConnection, NSMutableDictionary;

@interface CADOperationProxy : NSObject {

	ClientConnection* _conn;
	NSMutableDictionary* _operationGroups;

}
+(id)allOperationGroupClasses;
+(Class)_operationGroupClassFromSelector:(SEL)arg1 ;
+(Class)operationProxyClassForClientWithConnection:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithClientConnection:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)_operationGroupForClass:(Class)arg1 ;
-(void)_emptyMethod;
-(id)_copyReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3 ;
@end


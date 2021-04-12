/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@class NSXPCConnection, Protocol, CADDatabaseInitializationOptions;

@interface CADXPCProxyHelper : NSObject {

	NSXPCConnection* _connection;
	Protocol* _protocol;
	BOOL _synchronous;
	CADDatabaseInitializationOptions* _initializationOptions;

}

@property (retain) CADDatabaseInitializationOptions * initializationOptions;              //@synthesize initializationOptions=_initializationOptions - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(BOOL)arg3 ;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(id)_getReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3 ;
-(id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2 ;
-(long long)replyBlockArgumentIndex:(id)arg1 ;
-(BOOL)_shouldResendInitializationOptionsForInvocation:(id)arg1 ;
@end


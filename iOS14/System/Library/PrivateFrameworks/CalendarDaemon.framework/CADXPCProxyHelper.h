/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldResendInitializationOptionsForInvocation:(id)arg1 ;
-(long long)replyBlockArgumentIndex:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(BOOL)arg3 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3 ;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(id)_getReplyBlockFromInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end


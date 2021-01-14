/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATXPCInterface.h>

@class NSXPCConnection, NSString;

@interface CATXPCTransport : CATTransport <CATXPCInterface> {

	NSXPCConnection* mConnection;
	BOOL mConnectionHasResumed;
	BOOL mConnectionShouldInvalidate;
	BOOL mConnectionHasInvalidated;

}

@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(void)invalidateConnection;
-(unsigned)effectiveUserIdentifier;
-(id)operationToSendMessage:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(int)processIdentifier;
-(id)init;
-(void)suspendConnection;
-(void)tearDownConnection;
-(void)resumeConnection;
-(void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2 ;
-(int)auditSessionIdentifier;
-(void)setUpConnection;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(unsigned)effectiveGroupIdentifier;
-(void)didInvalidate;
-(id)valueForEntitlement:(id)arg1 ;
-(void)processMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSInCallPresentationClientToServerInterface.h>

@protocol SBSInCallPresentationClientToServerInterface;
@class BSServiceConnection, NSUUID, NSString;

@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface> {

	BSServiceConnection* _connection;
	id<SBSInCallPresentationClientToServerInterface> _proxyInterface;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSInCallPresentationClientToServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * clientIdentifier;                                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentTarget;
-(id<SBSInCallPresentationClientToServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSInCallPresentationClientToServerInterface>)arg1 ;
-(BSServiceConnection *)connection;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(oneway void)presentWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSUUID *)clientIdentifier;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end


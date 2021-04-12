/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICDelegationServiceConnectionDelegate.h>

@protocol OS_dispatch_queue, ICDelegationProviderServiceSessionDelegate;
@class NSObject, ICDelegationServiceConnection, ICDelegationProviderServiceProtocolHandler, NSMutableDictionary, NSArray, ICDelegationProviderNetService, ICRequestContext, ICUserIdentityStore, NSString;

@interface ICDelegationProviderServiceSession : NSObject <ICDelegationServiceConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	ICDelegationServiceConnection* _connection;
	id<ICDelegationProviderServiceSessionDelegate> _delegate;
	ICDelegationProviderServiceProtocolHandler* _protocolHandler;
	NSMutableDictionary* _sessionIDToStreamContext;
	long long _state;
	NSArray* _delegationAccountUUIDs;
	ICDelegationProviderNetService* _netService;
	ICRequestContext* _requestContext;
	NSArray* _userIdentities;
	ICUserIdentityStore* _userIdentityStore;

}

@property (assign,nonatomic,__weak) id<ICDelegationProviderServiceSessionDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * delegationAccountUUIDs;                                     //@synthesize delegationAccountUUIDs=_delegationAccountUUIDs - In the implementation block
@property (nonatomic,readonly) ICDelegationProviderNetService * netService;                               //@synthesize netService=_netService - In the implementation block
@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                                    //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userIdentities;                                             //@synthesize userIdentities=_userIdentities - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * userIdentityStore;                                   //@synthesize userIdentityStore=_userIdentityStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ICDelegationProviderServiceSessionDelegate>)delegate;
-(void)setDelegate:(id<ICDelegationProviderServiceSessionDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(ICRequestContext *)requestContext;
-(ICDelegationProviderNetService *)netService;
-(void)_finishWithError:(id)arg1 ;
-(ICUserIdentityStore *)userIdentityStore;
-(NSArray *)delegationAccountUUIDs;
-(id)initWithUserIdentities:(id)arg1 userIdentityStore:(id)arg2 requestContext:(id)arg3 netService:(id)arg4 delegationAccountUUIDs:(id)arg5 ;
-(void)delegationServiceConnectionDidClose:(id)arg1 ;
-(void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2 ;
-(void)_startDelegation;
-(void)_handleStartDelegationResponse:(id)arg1 ;
-(NSArray *)userIdentities;
@end


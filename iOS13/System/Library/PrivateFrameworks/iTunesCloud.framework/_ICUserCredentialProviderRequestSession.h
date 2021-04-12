/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class ICUserIdentityProperties, NSArray, NSMapTable, NSMutableDictionary, NSMutableArray, ICUserIdentityStore;

@interface _ICUserCredentialProviderRequestSession : NSObject {

	ICUserIdentityProperties* _activeICloudAccountProperties;
	NSArray* _credentialRequests;
	NSMapTable* _delegationCredentialRequestToSpecificUserIdentity;
	NSMapTable* _delegationCredentialRequestToIdentityProperties;
	NSMutableDictionary* _delegationUserIdentityToUUIDs;
	long long _maximumQualityOfService;
	NSMutableArray* _pendingPropertyLoadCredentialRequests;
	NSMutableArray* _pendingResponseCredentialRequests;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICUserIdentityProperties * activeICloudAccountProperties;                      //@synthesize activeICloudAccountProperties=_activeICloudAccountProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * credentialRequests;                                         //@synthesize credentialRequests=_credentialRequests - In the implementation block
@property (nonatomic,retain) NSMapTable * delegationCredentialRequestToSpecificUserIdentity;              //@synthesize delegationCredentialRequestToSpecificUserIdentity=_delegationCredentialRequestToSpecificUserIdentity - In the implementation block
@property (nonatomic,retain) NSMapTable * delegationCredentialRequestToIdentityProperties;                //@synthesize delegationCredentialRequestToIdentityProperties=_delegationCredentialRequestToIdentityProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegationUserIdentityToUUIDs;                         //@synthesize delegationUserIdentityToUUIDs=_delegationUserIdentityToUUIDs - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore; 
@property (nonatomic,readonly) long long maximumQualityOfService;                                         //@synthesize maximumQualityOfService=_maximumQualityOfService - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPropertyLoadCredentialRequests;                      //@synthesize pendingPropertyLoadCredentialRequests=_pendingPropertyLoadCredentialRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingResponseCredentialRequests;                          //@synthesize pendingResponseCredentialRequests=_pendingResponseCredentialRequests - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingResponses; 
@property (nonatomic,copy,readonly) id responseHandler;                                                   //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(NSArray *)credentialRequests;
-(ICUserIdentityStore *)identityStore;
-(long long)maximumQualityOfService;
-(void)setActiveICloudAccountProperties:(ICUserIdentityProperties *)arg1 ;
-(NSMapTable *)delegationCredentialRequestToSpecificUserIdentity;
-(void)setDelegationUserIdentityToUUIDs:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)delegationCredentialRequestToIdentityProperties;
-(NSMutableDictionary *)delegationUserIdentityToUUIDs;
-(NSMutableArray *)pendingResponseCredentialRequests;
-(ICUserIdentityProperties *)activeICloudAccountProperties;
-(BOOL)hasPendingResponses;
-(NSMutableArray *)pendingPropertyLoadCredentialRequests;
-(void)setDelegationCredentialRequestToSpecificUserIdentity:(NSMapTable *)arg1 ;
-(void)setDelegationCredentialRequestToIdentityProperties:(NSMapTable *)arg1 ;
-(void)setPendingPropertyLoadCredentialRequests:(NSMutableArray *)arg1 ;
-(id)initWithCredentialRequests:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setPendingResponseCredentialRequests:(NSMutableArray *)arg1 ;
@end


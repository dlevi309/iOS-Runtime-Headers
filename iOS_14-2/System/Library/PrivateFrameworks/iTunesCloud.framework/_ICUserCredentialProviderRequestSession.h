/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ICUserIdentityStore *)identityStore;
-(NSMapTable *)delegationCredentialRequestToIdentityProperties;
-(ICUserIdentityProperties *)activeICloudAccountProperties;
-(long long)maximumQualityOfService;
-(void)setDelegationCredentialRequestToSpecificUserIdentity:(NSMapTable *)arg1 ;
-(id)responseHandler;
-(void)setPendingPropertyLoadCredentialRequests:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)delegationUserIdentityToUUIDs;
-(void)setDelegationUserIdentityToUUIDs:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)delegationCredentialRequestToSpecificUserIdentity;
-(id)initWithCredentialRequests:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setActiveICloudAccountProperties:(ICUserIdentityProperties *)arg1 ;
-(NSMutableArray *)pendingPropertyLoadCredentialRequests;
-(void)setPendingResponseCredentialRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingResponseCredentialRequests;
-(NSArray *)credentialRequests;
-(void)setDelegationCredentialRequestToIdentityProperties:(NSMapTable *)arg1 ;
-(BOOL)hasPendingResponses;
@end


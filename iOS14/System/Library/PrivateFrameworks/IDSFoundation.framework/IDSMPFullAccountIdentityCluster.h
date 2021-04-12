/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>

@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity {

	SecKeyRef _publicKey;

}

@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) IDSMPFullAccountIdentity * fullAccountIdentity; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesAdmin; 
@property (nonatomic,readonly) NSArray * fullServiceIdentitiesSigning; 
@property (nonatomic,readonly) SecKeyRef publicKey;                                         //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * forwardingTicket; 
+(id)clusterWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(SecKeyRef)publicKey;
-(IDSMPFullAccountIdentity *)fullAccountIdentity;
-(id)adminServiceIdentityWithType:(long long)arg1 ;
-(id)signingServiceIdentityWithType:(long long)arg1 ;
-(ENGroupID *)groupID;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
-(NSData *)forwardingTicket;
-(id)publicAccountClusterWithError:(id*)arg1 ;
-(id)clusterByUpdatingGroupID:(id)arg1 error:(id*)arg2 ;
-(NSArray *)fullServiceIdentitiesAdmin;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4 ;
-(NSArray *)fullServiceIdentitiesSigning;
-(BOOL)isParentOfCluster:(id)arg1 ;
@end


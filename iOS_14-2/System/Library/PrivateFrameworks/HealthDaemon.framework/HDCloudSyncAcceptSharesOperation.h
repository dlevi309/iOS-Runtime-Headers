/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class NSArray, NSDictionary, CKShareParticipant;

@interface HDCloudSyncAcceptSharesOperation : HDCloudSyncOperation {

	NSArray* _shareURLs;
	NSDictionary* _invitationTokensByShareURLs;
	NSArray* _acceptedShares;
	CKShareParticipant* _ownerParticipant;

}

@property (nonatomic,copy,readonly) NSArray * shareURLs;                                     //@synthesize shareURLs=_shareURLs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * invitationTokensByShareURLs;              //@synthesize invitationTokensByShareURLs=_invitationTokensByShareURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * acceptedShares;                                //@synthesize acceptedShares=_acceptedShares - In the implementation block
@property (nonatomic,copy,readonly) CKShareParticipant * ownerParticipant;                   //@synthesize ownerParticipant=_ownerParticipant - In the implementation block
-(void)main;
-(NSArray *)shareURLs;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(CKShareParticipant *)ownerParticipant;
-(NSArray *)acceptedShares;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 shareURLs:(id)arg3 invitationTokensByShareURL:(id)arg4 ;
-(void)_acceptSharesWithShareMetadata:(id)arg1 ;
-(NSDictionary *)invitationTokensByShareURLs;
@end


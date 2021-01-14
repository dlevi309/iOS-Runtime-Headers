/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKDPublicIdentityLookupRequest, NSArray;

@interface CKDFetchShareParticipantsOperation : CKDOperation {

	/*^block*/id _shareParticipantFetchedBlock;
	CKDPublicIdentityLookupRequest* _pendingRequest;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,retain) CKDPublicIdentityLookupRequest * pendingRequest;                                          //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) NSArray * userIdentityLookupInfos;                                                        //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,retain) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id shareParticipantFetchedBlock;                                                            //@synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(void)setPendingRequest:(CKDPublicIdentityLookupRequest *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)shareParticipantFetchedBlock;
-(void)finishWithError:(id)arg1 ;
-(void)setShareParticipantFetchedBlock:(id)arg1 ;
-(CKDPublicIdentityLookupRequest *)pendingRequest;
-(void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3 ;
-(void)_fetchIdentities;
@end


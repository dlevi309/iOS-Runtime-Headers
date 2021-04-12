/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class CKShareParticipant, CKUserIdentityLookupInfo;

@interface HDCloudSyncLookupParticipantOperation : HDCloudSyncOperation {

	CKShareParticipant* _participant;
	CKUserIdentityLookupInfo* _identityLookupInfo;

}

@property (readonly) CKShareParticipant * participant;              //@synthesize participant=_participant - In the implementation block
-(void)main;
-(CKShareParticipant *)participant;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3 ;
-(void)_unitTest_setParticipant:(id)arg1 ;
@end


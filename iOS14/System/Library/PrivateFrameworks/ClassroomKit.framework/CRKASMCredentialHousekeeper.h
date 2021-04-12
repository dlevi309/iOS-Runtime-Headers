/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKASMRoster;
@class CRKASMCredentialStore;

@interface CRKASMCredentialHousekeeper : NSObject {

	id<CRKASMRoster> _roster;
	CRKASMCredentialStore* _credentialStore;

}

@property (nonatomic,readonly) id<CRKASMRoster> roster;                              //@synthesize roster=_roster - In the implementation block
@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
-(id<CRKASMRoster>)roster;
-(CRKASMCredentialStore *)credentialStore;
-(void)housekeep;
-(id)initWithRoster:(id)arg1 credentialStore:(id)arg2 ;
-(void)housekeepUserIdentities;
-(void)housekeepTrustedUserCertificates;
-(id)knownUserIdentifiers;
-(void)removeAllUserIdentitiesInManifest:(id)arg1 ;
-(BOOL)isEntryValid:(id)arg1 allowedUserIdentifiers:(id)arg2 ;
-(void)removeUserIdentities:(id)arg1 manifest:(id)arg2 ;
-(id)entriesInManifest:(id)arg1 forPersistentIDs:(id)arg2 ;
-(id)knownTrustedUserIdentifiers;
-(void)removeTrustedUserCertificates:(id)arg1 manifest:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKASMCredentialStore, NSString;

@interface CRKASMIdentityPicker : NSObject {

	CRKASMCredentialStore* _credentialStore;
	NSString* _userIdentifier;

}

@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;                       //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) id<CRKIdentity> identity; 
-(NSString *)userIdentifier;
-(id<CRKIdentity>)identity;
-(id)manifest;
-(CRKASMCredentialStore *)credentialStore;
-(id)initWithCredentialStore:(id)arg1 userIdentifier:(id)arg2 ;
-(id)candidatePersistentIDsInManifest:(id)arg1 ;
-(id)pickIdentityFromCandidates:(id)arg1 manifest:(id)arg2 ;
-(BOOL)isManifestEntryValid:(id)arg1 manifest:(id)arg2 ;
-(id)arrayBySortingPersistentIDs:(id)arg1 ;
-(id)pickIdentityFromOrderedCandidates:(id)arg1 manifest:(id)arg2 ;
@end


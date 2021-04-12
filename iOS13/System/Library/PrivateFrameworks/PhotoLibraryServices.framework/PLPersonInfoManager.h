/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

@interface PLPersonInfoManager : NSObject {

	NSMutableDictionary* _personDictsForPersonID;
	PLPhotoLibraryPathManager* _pathManager;
	PLLazyObject* _lazyAssetsdClient;

}
-(id)assetsdClient;
-(void)setPersonInfo:(id)arg1 forPersonID:(id)arg2 ;
-(id)personInfoForPersonID:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
-(void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3 ;
-(void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1 ;
-(id)emailsForInvitationRecordGUID:(id)arg1 ;
-(id)phonesForInvitationRecordGUID:(id)arg1 ;
-(void)clearCacheForPersonID:(id)arg1 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;
-(void)removePersistedInfo;
@end


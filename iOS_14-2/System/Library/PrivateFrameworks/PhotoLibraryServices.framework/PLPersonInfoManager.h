/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

@interface PLPersonInfoManager : NSObject {

	NSMutableDictionary* _personDictsForPersonID;
	PLPhotoLibraryPathManager* _pathManager;
	PLLazyObject* _lazyAssetsdClient;

}
-(id)assetsdClient;
-(id)plistPath;
-(id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5 ;
-(void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3 ;
-(void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1 ;
-(void)clearCacheForPersonID:(id)arg1 ;
-(void)_loadDictionariesIfNeeded;
-(void)removePersistedInfo;
-(id)personInfoForPersonID:(id)arg1 ;
-(void)setPersonInfo:(id)arg1 forPersonID:(id)arg2 ;
-(id)phonesForInvitationRecordGUID:(id)arg1 ;
-(id)emailsForInvitationRecordGUID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
@end


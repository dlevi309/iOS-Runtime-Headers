/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {

	ASAccount* _account;
	NSMutableDictionary* _folderCache;
	NSMutableDictionary* _folderByIdCache;
	id _delegate;

}
+(id)_dataDirectoryPath;
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
+(id)_folderCacheFilenameWithId:(id)arg1 ;
-(id)description;
-(void)setDelegate:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)folders;
-(id)folderForID:(id)arg1 ;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)arg1 ;
-(void)blowAwayFolderCache;
-(id)folderIdsForPersistentPush;
-(id)folderIdsForPersistentPushForClientID:(id)arg1 ;
-(id)folderIdsForPersistentPushForDataclasses:(long long)arg1 clientID:(id)arg2 ;
-(void)clearLocalCache;
-(id)_folderCacheFilename;
-(void)_setFolderByIdCacheFromCurrentCache;
-(void)_setFolderPathsFromCurrentCache;
-(void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
-(id)folderCache;
-(id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3 ;
-(void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg1 ;
-(void)setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_pruneBadFolderIdsThatExternalClientsCareAbout;
-(void)_setFolderCache:(id)arg1 ;
-(void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
-(id)_savedFolderPathsThatExternalClientsCareAbout;
-(void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg1 ;
-(id)_deviceIdInCache;
-(id)foldersUnderFolderWithID:(id)arg1 ;
-(void)setFolderCache:(id)arg1 ;
-(void)setFolderIdsForPersistentPush:(id)arg1 clientID:(id)arg2 ;
@end


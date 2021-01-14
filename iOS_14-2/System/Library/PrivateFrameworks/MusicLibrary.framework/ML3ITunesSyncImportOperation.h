/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class NSMutableDictionary, NSMutableSet;

@interface ML3ITunesSyncImportOperation : ML3ImportOperation {

	BOOL _sagaIsEnabled;
	BOOL _resetSync;
	NSMutableDictionary* _cachedPIDToFilePathMap;
	NSMutableDictionary* _cachedPIDToLocationPropertyMap;
	NSMutableDictionary* _cachedSyncIDsToPIDsMap;
	NSMutableSet* _importedPlaylists;
	long long _devicePrimaryContainer;

}
-(void)main;
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2 ;
-(void)_archiveSyncPlistFiles;
-(id)_syncPlistFilesFromDirectory:(id)arg1 ;
-(BOOL)_performImportFromPlistFiles:(id)arg1 withTransaction:(id)arg2 ;
-(id)_syncOperationsFromPlistFile:(id)arg1 ;
-(void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2 ;
-(BOOL)_processInsertTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processUpdateTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processDeleteTrackOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processInsertPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processDeletePlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(id)_dbInfoValuesForStep:(id)arg1 ;
-(void)_processGeniusConfigPlist:(id)arg1 ;
@end


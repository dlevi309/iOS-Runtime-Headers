/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class ML3DatabaseConnection, NSMutableSet, NSObject;

@interface ML3ProtoSyncImportOperation : ML3ImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	BOOL _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	BOOL _isServerImport;
	long long _readSourceState;
	BOOL _isReadSourceCancelled;
	BOOL _importFinished;
	NSMutableSet* _syncIdsToUnlink;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _readSource;

}
-(void)cancel;
-(void)main;
-(unsigned long long)importSource;
-(id)initWithDatabaseImport:(id)arg1 ;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)_unlinkUnavailableMediaItems;
-(BOOL)_processSyncHeader:(id)arg1 ;
-(BOOL)_processSyncError:(id)arg1 ;
-(BOOL)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
@end


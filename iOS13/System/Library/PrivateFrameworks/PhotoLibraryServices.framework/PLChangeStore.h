/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableArray, PLPhotoLibraryPathManager, NSURL;

@interface PLChangeStore : NSObject {

	NSObject*<OS_dispatch_queue> _eventsIsolation;
	NSMutableArray* _events;
	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseIsolation;
	unsigned long long _firstOnDiskEventIndex;
	PLPhotoLibraryPathManager* _photoLibraryPathManager;
	NSURL* _databaseFileURL;

}

@property (nonatomic,readonly) unsigned long long firstOnDiskEventIndex; 
@property (nonatomic,readonly) NSURL * databaseFileURL;                                          //@synthesize databaseFileURL=_databaseFileURL - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * photoLibraryPathManager;              //@synthesize photoLibraryPathManager=_photoLibraryPathManager - In the implementation block
-(void)dealloc;
-(unsigned long long)lastIndex;
-(sqlite3_stmtRef)prepareStatement:(const char*)arg1 ;
-(void)openDatabase;
-(void)prepareAndEvaluateStatement:(const char*)arg1 ;
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)clearStore:(/*^block*/id)arg1 ;
-(unsigned long long)firstOnDiskEventIndex;
-(BOOL)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 lastEventIndex:(unsigned long long*)arg3 ;
-(void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)enumeratePersistedDidSaveEventsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setupDatabase;
-(void)performBlockAsTransaction:(/*^block*/id)arg1 ;
-(void)bindInt:(int)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindInt64:(long long)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindXPCData:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindString:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindUUID:(unsigned char)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)_backupStore;
-(void)_clearStore;
-(PLPhotoLibraryPathManager *)photoLibraryPathManager;
-(NSURL *)databaseFileURL;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSyncChangeStore.h>

@protocol NAScheduler;
@class NSString;

@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore> {

	id<NAScheduler> _archiverScheduler;
	NSString* _syncDataPath;
	NSString* _syncDataFile;

}

@property (nonatomic,readonly) id<NAScheduler> archiverScheduler;              //@synthesize archiverScheduler=_archiverScheduler - In the implementation block
@property (nonatomic,copy) NSString * syncDataPath;                            //@synthesize syncDataPath=_syncDataPath - In the implementation block
@property (nonatomic,copy) NSString * syncDataFile;                            //@synthesize syncDataFile=_syncDataFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)syncDataPath;
-(void)setupSyncDataFileForDataModel:(id)arg1 ;
-(void)_removeSyncDataFile;
-(void)setSyncDataPath:(NSString *)arg1 ;
-(void)persistChanges:(id)arg1 ;
-(id<NAScheduler>)archiverScheduler;
-(void)setSyncDataFile:(NSString *)arg1 ;
-(NSString *)syncDataFile;
-(id)initWithDataModel:(id)arg1 ;
-(id)loadChanges;
@end


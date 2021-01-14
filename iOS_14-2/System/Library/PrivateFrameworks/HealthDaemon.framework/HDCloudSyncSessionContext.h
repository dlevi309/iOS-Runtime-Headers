/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSMutableSet, HDProfile, _HKArchiveCreator, NSURL, HDSyncAnchorRangeMap, NSError, NSString;

@interface HDCloudSyncSessionContext : NSObject <NSProgressReporting> {

	NSMutableSet* _syncEntityClassesWithProcessedChanges;
	BOOL _isComplete;
	BOOL _success;
	BOOL _hasOpenSequence;
	HDProfile* _profile;
	_HKArchiveCreator* _archiveCreator;
	NSURL* _archiveURL;
	HDSyncAnchorRangeMap* _pendingAnchorRangeMap;
	unsigned long long _changesetCount;
	unsigned long long _archiveCount;
	/*^block*/id _completion;
	NSError* _error;
	NSProgress* _progress;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) _HKArchiveCreator * archiveCreator;                        //@synthesize archiveCreator=_archiveCreator - In the implementation block
@property (nonatomic,copy,readonly) NSURL * archiveURL;                                   //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) HDSyncAnchorRangeMap * pendingAnchorRangeMap;              //@synthesize pendingAnchorRangeMap=_pendingAnchorRangeMap - In the implementation block
@property (assign,nonatomic) unsigned long long changesetCount;                           //@synthesize changesetCount=_changesetCount - In the implementation block
@property (assign,nonatomic) unsigned long long archiveCount;                             //@synthesize archiveCount=_archiveCount - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                             //@synthesize isComplete=_isComplete - In the implementation block
@property (assign,nonatomic) BOOL success;                                                //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL hasOpenSequence;                                      //@synthesize hasOpenSequence=_hasOpenSequence - In the implementation block
@property (nonatomic,readonly) unsigned long long archiveSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_assetFileHandleForArchiveURL:(id)arg1 fileManager:(id)arg2 error:(id*)arg3 ;
+(BOOL)_updateAnchorRangeMap:(id)arg1 withChange:(id)arg2 outError:(id*)arg3 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isComplete;
-(void)setCompletion:(id)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(NSURL *)archiveURL;
-(id)completion;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setIsComplete:(BOOL)arg1 ;
-(HDProfile *)profile;
-(unsigned long long)archiveSize;
-(HDSyncAnchorRangeMap *)pendingAnchorRangeMap;
-(_HKArchiveCreator *)archiveCreator;
-(BOOL)hasOpenSequence;
-(void)finishProgress;
-(id)initWithChangedSyncEntityCount:(unsigned long long)arg1 profile:(id)arg2 ;
-(BOOL)resetInvalidArchiveCreatorWithSessionUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)addChangeData:(id)arg1 changes:(id)arg2 sessionIdentifier:(id)arg3 outError:(id*)arg4 ;
-(unsigned long long)changesetCount;
-(void)setChangesetCount:(unsigned long long)arg1 ;
-(unsigned long long)archiveCount;
-(void)setArchiveCount:(unsigned long long)arg1 ;
@end


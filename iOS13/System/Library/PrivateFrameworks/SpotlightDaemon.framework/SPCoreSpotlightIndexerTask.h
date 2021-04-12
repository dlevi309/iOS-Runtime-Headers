/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class CSIndexJob, NSArray;

@interface SPCoreSpotlightIndexerTask : NSObject {

	BOOL _shouldResumeOnFailure;
	CSIndexJob* _job;
	NSArray* _indexers;
	NSArray* _bundleIDs;
	NSArray* _completedBundleIDs;
	unsigned long long _dataMigrationStage;

}

@property (nonatomic,readonly) CSIndexJob * job;                                 //@synthesize job=_job - In the implementation block
@property (nonatomic,readonly) NSArray * indexers;                               //@synthesize indexers=_indexers - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                                //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * completedBundleIDs;                       //@synthesize completedBundleIDs=_completedBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long dataMigrationStage;              //@synthesize dataMigrationStage=_dataMigrationStage - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeOnFailure;                         //@synthesize shouldResumeOnFailure=_shouldResumeOnFailure - In the implementation block
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(CSIndexJob *)job;
-(id)initWithIndexJob:(id)arg1 indexers:(id)arg2 ;
-(NSArray *)indexers;
-(NSArray *)completedBundleIDs;
-(void)setCompletedBundleIDs:(NSArray *)arg1 ;
-(unsigned long long)dataMigrationStage;
-(void)setDataMigrationStage:(unsigned long long)arg1 ;
-(BOOL)shouldResumeOnFailure;
-(void)setShouldResumeOnFailure:(BOOL)arg1 ;
@end


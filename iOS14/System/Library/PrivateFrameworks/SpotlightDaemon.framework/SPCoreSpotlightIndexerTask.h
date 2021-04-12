/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldResumeOnFailure;
-(unsigned long long)dataMigrationStage;
-(CSIndexJob *)job;
-(NSArray *)completedBundleIDs;
-(void)setDataMigrationStage:(unsigned long long)arg1 ;
-(void)setCompletedBundleIDs:(NSArray *)arg1 ;
-(NSArray *)indexers;
-(id)initWithIndexJob:(id)arg1 indexers:(id)arg2 ;
-(void)setShouldResumeOnFailure:(BOOL)arg1 ;
@end


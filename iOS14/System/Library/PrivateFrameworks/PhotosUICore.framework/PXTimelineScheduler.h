/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXTimelineDataSource, NSArray;

@interface PXTimelineScheduler : NSObject {

	double _duration;
	PXTimelineDataSource* _timelineDataSource;
	NSArray* _memoryTimelineEntries;
	NSArray* _featuredPhotoTimelineEntries;
	NSArray* _bestContent;
	NSArray* _timelineCandidates;
	unsigned long long _currentTimelineCandidateIndex;

}

@property (nonatomic,retain) PXTimelineDataSource * timelineDataSource;                     //@synthesize timelineDataSource=_timelineDataSource - In the implementation block
@property (nonatomic,retain) NSArray * memoryTimelineEntries;                               //@synthesize memoryTimelineEntries=_memoryTimelineEntries - In the implementation block
@property (nonatomic,retain) NSArray * featuredPhotoTimelineEntries;                        //@synthesize featuredPhotoTimelineEntries=_featuredPhotoTimelineEntries - In the implementation block
@property (nonatomic,retain) NSArray * bestContent;                                         //@synthesize bestContent=_bestContent - In the implementation block
@property (nonatomic,retain) NSArray * timelineCandidates;                                  //@synthesize timelineCandidates=_timelineCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long currentTimelineCandidateIndex;              //@synthesize currentTimelineCandidateIndex=_currentTimelineCandidateIndex - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
-(void)setDuration:(double)arg1 ;
-(id)init;
-(NSArray *)bestContent;
-(id)initWithTimelineDataSource:(id)arg1 ;
-(id)scheduledTimelineEntriesWithOptions:(id)arg1 ;
-(void)_initTimelineEntriesAtDate:(id)arg1 ;
-(id)_scheduledTimelineEntriesWithOptions:(id)arg1 atDate:(id)arg2 ;
-(id)_findBestContentAndRemoveFromSourceAtDate:(id)arg1 ;
-(id)_coalesceRepeatedTimelineEntries:(id)arg1 ;
-(id)_sortedTimelineEntriesForMemoriesAtDate:(id)arg1 ;
-(id)_timelineEntriesFromAssetCollections:(id)arg1 ;
-(id)_timelineEntryByBestContentIntervalAtDate:(id)arg1 numberOfDays:(long long)arg2 options:(id)arg3 ;
-(long long)_startOfDayIndexWithOffsetDay:(long long)arg1 entriesCount:(long long)arg2 perDayLimit:(long long)arg3 ;
-(PXTimelineDataSource *)timelineDataSource;
-(id)_timelineAtDate:(id)arg1 startOfDayCandidatesIndex:(long long)arg2 timelineEntryByBestContentInterval:(id)arg3 options:(id)arg4 ;
-(void)setTimelineDataSource:(PXTimelineDataSource *)arg1 ;
-(NSArray *)memoryTimelineEntries;
-(void)setMemoryTimelineEntries:(NSArray *)arg1 ;
-(NSArray *)featuredPhotoTimelineEntries;
-(void)setFeaturedPhotoTimelineEntries:(NSArray *)arg1 ;
-(void)setBestContent:(NSArray *)arg1 ;
-(NSArray *)timelineCandidates;
-(void)setTimelineCandidates:(NSArray *)arg1 ;
-(unsigned long long)currentTimelineCandidateIndex;
-(void)setCurrentTimelineCandidateIndex:(unsigned long long)arg1 ;
-(double)duration;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString, NSArray, NSDate, NSURL;

@interface TVPChapterCollection : NSObject {

	BOOL _shouldStartPlaybackFromStartDate;
	BOOL _shouldDisplayChapterMarkers;
	BOOL _shouldShowDescriptionOnChapterSkip;
	NSString* _name;
	NSArray* _chapters;
	long long _type;
	id _backingData;
	NSDate* _startDate;
	double _refreshInterval;
	NSURL* _refreshURL;

}

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                                   //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id backingData;                                       //@synthesize backingData=_backingData - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL shouldStartPlaybackFromStartDate;                //@synthesize shouldStartPlaybackFromStartDate=_shouldStartPlaybackFromStartDate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayChapterMarkers;                     //@synthesize shouldDisplayChapterMarkers=_shouldDisplayChapterMarkers - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDescriptionOnChapterSkip;              //@synthesize shouldShowDescriptionOnChapterSkip=_shouldShowDescriptionOnChapterSkip - In the implementation block
@property (assign,nonatomic) double refreshInterval;                               //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,copy) NSURL * refreshURL;                                     //@synthesize refreshURL=_refreshURL - In the implementation block
-(id)init;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(double)refreshInterval;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
-(NSURL *)refreshURL;
-(void)setRefreshURL:(NSURL *)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(id)backingData;
-(void)setBackingData:(id)arg1 ;
-(id)chapterForTime:(double)arg1 ;
-(id)nearestChapterForTime:(double)arg1 ;
-(id)chapterForDate:(id)arg1 ;
-(id)nearestChapterForDate:(id)arg1 ;
-(BOOL)shouldStartPlaybackFromStartDate;
-(void)setShouldStartPlaybackFromStartDate:(BOOL)arg1 ;
-(BOOL)shouldDisplayChapterMarkers;
-(void)setShouldDisplayChapterMarkers:(BOOL)arg1 ;
-(BOOL)shouldShowDescriptionOnChapterSkip;
-(void)setShouldShowDescriptionOnChapterSkip:(BOOL)arg1 ;
@end


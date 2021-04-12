/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class TVPTimeRange, NSString, TVPDateRange;

@interface TVPChapter : NSObject {

	TVPTimeRange* _timeRange;
	NSString* _localizedName;
	NSString* _chapterDescription;
	TVPDateRange* _dateRange;

}

@property (nonatomic,copy) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * chapterDescription;              //@synthesize chapterDescription=_chapterDescription - In the implementation block
@property (nonatomic,retain) TVPTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) TVPDateRange * dateRange;                 //@synthesize dateRange=_dateRange - In the implementation block
-(NSString *)localizedName;
-(void)setTimeRange:(TVPTimeRange *)arg1 ;
-(TVPTimeRange *)timeRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(TVPDateRange *)dateRange;
-(void)setDateRange:(TVPDateRange *)arg1 ;
-(NSString *)chapterDescription;
-(void)setChapterDescription:(NSString *)arg1 ;
@end


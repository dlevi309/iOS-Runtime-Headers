/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(TVPDateRange *)dateRange;
-(void)setTimeRange:(TVPTimeRange *)arg1 ;
-(TVPTimeRange *)timeRange;
-(void)setDateRange:(TVPDateRange *)arg1 ;
-(NSString *)chapterDescription;
-(void)setChapterDescription:(NSString *)arg1 ;
@end


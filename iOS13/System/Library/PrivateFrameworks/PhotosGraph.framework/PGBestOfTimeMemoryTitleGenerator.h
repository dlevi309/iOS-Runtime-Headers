/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDate;

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _year;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long year;                  //@synthesize year=_year - In the implementation block
-(long long)year;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithYear:(long long)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_bestOfPastTimeTitle;
-(id)_bestOfYearTitle;
-(id)_generateSubtitle;
@end


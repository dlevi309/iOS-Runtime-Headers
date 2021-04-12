/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithYear:(long long)arg1 ;
-(id)_bestOfPastTimeTitle;
-(id)_bestOfYearTitle;
-(id)_generateSubtitle;
@end


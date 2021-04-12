/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIAppIconImage.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)loadImage;
-(id)initWithDate:(id)arg1 variant:(unsigned long long)arg2 ;
@end


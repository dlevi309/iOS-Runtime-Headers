/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/BaseDateProvider.h>

@class NSDateFormatter, NSMutableArray, NSDate;

@interface TimeProvider : BaseDateProvider {

	NSDateFormatter* _dateFormatter;
	NSMutableArray* _sizingFallbackBlocks;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 ;
-(id)_timeTextWithDropMinutes:(BOOL)arg1 dropDesignator:(BOOL)arg2 ;
@end


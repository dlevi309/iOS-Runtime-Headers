/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDate;

@interface RETimeline : NSObject <NSCopying> {

	NSArray* _transitionDates;
	NSArray* _values;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * transitionDates; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)transitionDates;
-(id)valueForDate:(id)arg1 ;
-(BOOL)isEqualToTimeline:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 values:(id)arg2 durations:(id)arg3 ;
-(id)initWithTimeline:(id)arg1 ;
@end


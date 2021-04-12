/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)transitionDates;
-(NSDate *)endDate;
-(id)init;
-(NSDate *)startDate;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueForDate:(id)arg1 ;
-(id)initWithTimeline:(id)arg1 ;
-(BOOL)isEqualToTimeline:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 values:(id)arg2 durations:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic,readonly) NSArray * uniformTimeIntervals; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long scheduledDays; 
@property (nonatomic,readonly) NSArray * recurrences; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)recurrences;
-(id)recurrencesForDay:(long long)arg1 ;
-(BOOL)isScheduledForDay:(long long)arg1 ;
-(id)timeIntervalsForDay:(long long)arg1 ;
-(long long)scheduledDays;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(NSArray *)uniformTimeIntervals;
@end


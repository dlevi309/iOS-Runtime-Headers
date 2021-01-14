/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _endDate;
	unsigned long long _occurrenceCount;

}

@property (nonatomic,readonly) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1 ;
+(id)recurrenceEndWithEndDate:(id)arg1 ;
-(NSDate *)endDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithEndDate:(id)arg1 ;
-(unsigned long long)occurrenceCount;
-(id)initWithOccurrenceCount:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)usesEndDate;
@end


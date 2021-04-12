/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(unsigned long long)occurrenceCount;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned long long)arg1 ;
-(BOOL)usesEndDate;
@end


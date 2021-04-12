/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface REMReminderFetchMetadataDueDateCount : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _dueDate;
	long long _count;

}

@property (nonatomic,readonly) NSDate * dueDate;              //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) long long count;               //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)dueDate;
-(id)initWithDueDate:(id)arg1 count:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


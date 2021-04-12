/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)dueDate;
-(id)initWithDueDate:(id)arg1 count:(long long)arg2 ;
@end


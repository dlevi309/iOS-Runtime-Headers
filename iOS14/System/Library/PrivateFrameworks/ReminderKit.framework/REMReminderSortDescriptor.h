/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMReminderSortDescriptor : NSObject <NSSecureCoding> {

	BOOL _ascending;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorSortingByTitleAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByCreationDateAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByDueDateAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByPriorityAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByOrderingInListAscending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(long long)type;
-(id)initWithType:(long long)arg1 ascending:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


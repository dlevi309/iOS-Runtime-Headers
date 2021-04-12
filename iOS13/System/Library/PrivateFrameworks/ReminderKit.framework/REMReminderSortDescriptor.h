/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sortDescriptorSortingByCreationDateAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByDueDateAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByPriorityAscending:(BOOL)arg1 ;
+(id)sortDescriptorSortingByOrderingInListAscending:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(id)initWithType:(long long)arg1 ascending:(BOOL)arg2 ;
@end


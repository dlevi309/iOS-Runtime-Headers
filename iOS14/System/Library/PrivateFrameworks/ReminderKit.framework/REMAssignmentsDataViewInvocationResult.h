/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface REMAssignmentsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSSet* _assignments;

}

@property (nonatomic,readonly) NSSet * assignments;              //@synthesize assignments=_assignments - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)assignments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAssignments:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


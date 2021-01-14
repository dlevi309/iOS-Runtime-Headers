/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByParentReminderIDs : REMStoreInvocation <NSSecureCoding> {

	NSArray* _parentReminderIDs;

}

@property (nonatomic,readonly) NSArray * parentReminderIDs;              //@synthesize parentReminderIDs=_parentReminderIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithParentReminderIDs:(id)arg1 ;
-(NSArray *)parentReminderIDs;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


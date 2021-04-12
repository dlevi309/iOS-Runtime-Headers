/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSArray* _accountStorages;
	NSArray* _listStorages;
	NSArray* _reminderStorages;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * accountStorages;               //@synthesize accountStorages=_accountStorages - In the implementation block
@property (nonatomic,readonly) NSArray * listStorages;                  //@synthesize listStorages=_listStorages - In the implementation block
@property (nonatomic,readonly) NSArray * reminderStorages;              //@synthesize reminderStorages=_reminderStorages - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDs;                     //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)objectIDs;
-(NSArray *)accountStorages;
-(NSArray *)listStorages;
-(NSArray *)reminderStorages;
-(id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4 ;
@end


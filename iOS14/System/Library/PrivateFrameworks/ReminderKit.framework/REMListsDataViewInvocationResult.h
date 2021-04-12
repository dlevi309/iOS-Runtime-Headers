/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSArray* _accountStorages;
	NSArray* _listStorages;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * accountStorages;              //@synthesize accountStorages=_accountStorages - In the implementation block
@property (nonatomic,readonly) NSArray * listStorages;                 //@synthesize listStorages=_listStorages - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDs;                    //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)accountStorages;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)objectIDs;
-(id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 objectIDs:(id)arg3 ;
-(NSArray *)listStorages;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


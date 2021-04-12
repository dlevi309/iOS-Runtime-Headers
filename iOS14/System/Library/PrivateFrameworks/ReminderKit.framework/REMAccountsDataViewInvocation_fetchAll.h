/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMAccountsDataViewInvocation_fetchAll : REMStoreInvocation <NSSecureCoding> {

	long long _purpose;

}

@property (nonatomic,readonly) long long purpose;              //@synthesize purpose=_purpose - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)purpose;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPurpose:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, REMObjectID;

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {

	NSString* _externalIdentifier;
	REMObjectID* _accountObjectID;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountObjectID;              //@synthesize accountObjectID=_accountObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithExternalIdentifier:(id)arg1 accountObjectID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(REMObjectID *)accountObjectID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {

	NSArray* _externalIdentifiers;
	REMObjectID* _accountObjectID;

}

@property (nonatomic,readonly) NSArray * externalIdentifiers;              //@synthesize externalIdentifiers=_externalIdentifiers - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountObjectID;              //@synthesize accountObjectID=_accountObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)externalIdentifiers;
-(id)initWithExternalIdentifiers:(id)arg1 accountObjectID:(id)arg2 ;
-(REMObjectID *)accountObjectID;
@end


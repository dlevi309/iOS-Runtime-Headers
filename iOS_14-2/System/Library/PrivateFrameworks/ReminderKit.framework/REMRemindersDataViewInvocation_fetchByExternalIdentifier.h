/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {

	NSArray* _externalIdentifiers;
	REMObjectID* _listObjectID;

}

@property (nonatomic,readonly) NSArray * externalIdentifiers;              //@synthesize externalIdentifiers=_externalIdentifiers - In the implementation block
@property (nonatomic,readonly) REMObjectID * listObjectID;                 //@synthesize listObjectID=_listObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2 ;
-(REMObjectID *)listObjectID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)externalIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding> {

	NSArray* _daCalendarItemUniqueIdentifiers;
	REMObjectID* _listObjectID;

}

@property (nonatomic,readonly) NSArray * daCalendarItemUniqueIdentifiers;              //@synthesize daCalendarItemUniqueIdentifiers=_daCalendarItemUniqueIdentifiers - In the implementation block
@property (nonatomic,readonly) REMObjectID * listObjectID;                             //@synthesize listObjectID=_listObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDACalendarItemUniqueIdentifiers:(id)arg1 listObjectID:(id)arg2 ;
-(REMObjectID *)listObjectID;
-(NSArray *)daCalendarItemUniqueIdentifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


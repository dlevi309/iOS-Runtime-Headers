/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDACalendarItemUniqueIdentifiers:(id)arg1 listObjectID:(id)arg2 ;
-(REMObjectID *)listObjectID;
-(NSArray *)daCalendarItemUniqueIdentifiers;
@end


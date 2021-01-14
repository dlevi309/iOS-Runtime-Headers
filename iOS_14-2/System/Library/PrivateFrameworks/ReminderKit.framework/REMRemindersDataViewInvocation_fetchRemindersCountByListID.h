/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchRemindersCountByListID : REMStoreInvocation <NSSecureCoding> {

	REMObjectID* _listID;

}

@property (nonatomic,readonly) REMObjectID * listID;              //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithListID:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)listID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


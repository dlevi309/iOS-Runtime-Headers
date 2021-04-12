/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding> {

	BOOL _includingSubtasks;
	REMObjectID* _listID;

}

@property (nonatomic,readonly) BOOL includingSubtasks;              //@synthesize includingSubtasks=_includingSubtasks - In the implementation block
@property (nonatomic,readonly) REMObjectID * listID;                //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)listID;
-(id)initWithListID:(id)arg1 includingSubtasks:(BOOL)arg2 ;
-(BOOL)includingSubtasks;
@end


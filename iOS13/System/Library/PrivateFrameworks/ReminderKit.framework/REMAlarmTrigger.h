/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding> {

	REMObjectID* _objectID;

}

@property (nonatomic,retain) REMObjectID * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) BOOL isTemporal; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(REMObjectID *)remObjectID;
-(id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2 ;
-(BOOL)isContentEqual:(id)arg1 ;
@end


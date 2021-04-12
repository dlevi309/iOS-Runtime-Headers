/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(id)init;
-(REMObjectID *)remObjectID;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)initWithObjectID:(id)arg1 ;
-(BOOL)isTemporal;
-(BOOL)isContentEqual:(id)arg1 ;
-(id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


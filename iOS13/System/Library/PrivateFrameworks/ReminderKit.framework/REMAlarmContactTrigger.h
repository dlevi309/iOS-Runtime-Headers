/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMContactRepresentation;

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding> {

	REMContactRepresentation* _contactRepresentation;

}

@property (nonatomic,readonly) REMContactRepresentation * contactRepresentation;              //@synthesize contactRepresentation=_contactRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(REMContactRepresentation *)contactRepresentation;
-(id)initWithContactRepresentation:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 contactRepresentation:(id)arg2 ;
@end


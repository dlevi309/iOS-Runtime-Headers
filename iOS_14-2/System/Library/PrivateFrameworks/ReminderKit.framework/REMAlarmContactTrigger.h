/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(REMContactRepresentation *)contactRepresentation;
-(id)initWithContactRepresentation:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 contactRepresentation:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end


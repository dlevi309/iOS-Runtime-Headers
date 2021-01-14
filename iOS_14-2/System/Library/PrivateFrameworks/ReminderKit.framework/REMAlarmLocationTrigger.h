/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding> {

	REMStructuredLocation* _structuredLocation;
	long long _proximity;

}

@property (nonatomic,copy) REMStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (assign,nonatomic) long long proximity;                                   //@synthesize proximity=_proximity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)proximity;
-(id)description;
-(REMStructuredLocation *)structuredLocation;
-(id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(void)setStructuredLocation:(REMStructuredLocation *)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(BOOL)isContentEqual:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end


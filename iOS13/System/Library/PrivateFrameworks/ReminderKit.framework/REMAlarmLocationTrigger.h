/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)proximity;
-(id)_deepCopy;
-(REMStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(REMStructuredLocation *)arg1 ;
-(id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2 ;
-(BOOL)isTemporal;
-(BOOL)isContentEqual:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3 ;
@end


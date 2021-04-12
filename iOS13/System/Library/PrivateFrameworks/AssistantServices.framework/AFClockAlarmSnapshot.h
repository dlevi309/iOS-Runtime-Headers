/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface AFClockAlarmSnapshot : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _alarmsByID;
	NSOrderedSet* _notifiedFiringAlarmIDs;

}

@property (nonatomic,readonly) unsigned long long generation;                           //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * alarmsByID;                          //@synthesize alarmsByID=_alarmsByID - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * notifiedFiringAlarmIDs;              //@synthesize notifiedFiringAlarmIDs=_notifiedFiringAlarmIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)generation;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDictionary *)alarmsByID;
-(NSOrderedSet *)notifiedFiringAlarmIDs;
-(id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 alarmsByID:(id)arg3 notifiedFiringAlarmIDs:(id)arg4 ;
@end


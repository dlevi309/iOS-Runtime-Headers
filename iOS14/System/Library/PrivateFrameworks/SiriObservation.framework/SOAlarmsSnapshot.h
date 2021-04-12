/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	NSDictionary* _alarmsByID;
	NSOrderedSet* _firingAlarmIDs;
	NSOrderedSet* _dismissedAlarmIDs;

}

@property (nonatomic,copy,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * alarmsByID;                     //@synthesize alarmsByID=_alarmsByID - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * firingAlarmIDs;                 //@synthesize firingAlarmIDs=_firingAlarmIDs - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * dismissedAlarmIDs;              //@synthesize dismissedAlarmIDs=_dismissedAlarmIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSDictionary *)alarmsByID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSOrderedSet *)firingAlarmIDs;
-(id)initWithDate:(id)arg1 alarmsByID:(id)arg2 firingAlarmIDs:(id)arg3 dismissedAlarmIDs:(id)arg4 ;
-(NSOrderedSet *)dismissedAlarmIDs;
@end


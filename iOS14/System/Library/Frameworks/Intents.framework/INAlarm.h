/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateComponents, INSpeakableString, NSNumber, INSleepAlarmAttribute;

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSDateComponents* _dateTime;
	INSpeakableString* _label;
	NSNumber* _enabled;
	NSNumber* _firing;
	unsigned long long _alarmRepeatScheduleOptions;
	INSleepAlarmAttribute* _sleepAlarmAttribute;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * dateTime;                              //@synthesize dateTime=_dateTime - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * firing;                                        //@synthesize firing=_firing - In the implementation block
@property (nonatomic,readonly) unsigned long long alarmRepeatScheduleOptions;                 //@synthesize alarmRepeatScheduleOptions=_alarmRepeatScheduleOptions - In the implementation block
@property (nonatomic,copy,readonly) INSleepAlarmAttribute * sleepAlarmAttribute;              //@synthesize sleepAlarmAttribute=_sleepAlarmAttribute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)enabled;
-(NSNumber *)firing;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateComponents *)dateTime;
-(id)_dictionaryRepresentation;
-(unsigned long long)alarmRepeatScheduleOptions;
-(INSleepAlarmAttribute *)sleepAlarmAttribute;
-(id)initWithIdentifier:(id)arg1 dateTime:(id)arg2 label:(id)arg3 enabled:(id)arg4 firing:(id)arg5 alarmRepeatScheduleOptions:(unsigned long long)arg6 sleepAlarmAttribute:(id)arg7 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INSpeakableString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end


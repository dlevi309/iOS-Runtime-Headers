/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL, NSString;

@interface SOAlarm : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isEnabled;
	BOOL _isFiring;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatSchedule;

}

@property (nonatomic,copy,readonly) NSUUID * alarmID;                          //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * alarmURL;                          //@synthesize alarmURL=_alarmURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long hour;                        //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;                      //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatSchedule;              //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isFiring;                                  //@synthesize isFiring=_isFiring - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)hour;
-(BOOL)isFiring;
-(unsigned long long)minute;
-(NSURL *)alarmURL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)repeatSchedule;
-(NSUUID *)alarmID;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 title:(id)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 repeatSchedule:(unsigned long long)arg6 isEnabled:(BOOL)arg7 isFiring:(BOOL)arg8 ;
@end


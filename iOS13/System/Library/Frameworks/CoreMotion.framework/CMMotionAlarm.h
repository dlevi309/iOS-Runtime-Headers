/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CMMotionAlarmManager;

@interface CMMotionAlarm : NSObject <NSSecureCoding> {

	BOOL _repeats;
	unsigned _duration;
	unsigned _type;
	int _state;
	NSString* _name;
	unsigned long long _alarmId;
	NSString* _bundleId;
	CMMotionAlarmManager* _manager;

}

@property (assign,nonatomic) unsigned long long alarmId;                  //@synthesize alarmId=_alarmId - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                         //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CMMotionAlarmManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                              //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,readonly) unsigned type;                             //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)type;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)repeats;
-(int)state;
-(unsigned)duration;
-(CMMotionAlarmManager *)manager;
-(void)setState:(int)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setManager:(CMMotionAlarmManager *)arg1 ;
-(void)copyPropertiesFromAlarm:(id)arg1 ;
-(unsigned long long)alarmId;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 alarmId:(unsigned long long)arg5 bundleId:(id)arg6 state:(int)arg7 ;
-(void)setAlarmId:(unsigned long long)arg1 ;
-(BOOL)acknowledgeWithError:(id*)arg1 ;
-(BOOL)unregisterWithError:(id*)arg1 ;
@end


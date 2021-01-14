/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class NSDate, NSUserDefaults;

@interface VCMetricCheckIn : NSObject {

	NSDate* _currentDate;
	long long _mode;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) long long mode;                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentDate;                    //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * checkInDate; 
@property (nonatomic,copy,readonly) NSDate * intervalStartDate; 
+(id)recentCheckInWithMode:(long long)arg1 ;
-(long long)mode;
-(NSDate *)currentDate;
-(id)calendar;
-(NSUserDefaults *)userDefaults;
-(id)initWithCurrentDate:(id)arg1 mode:(long long)arg2 defaults:(id)arg3 ;
-(BOOL)isCheckInAllowed;
-(void)updateCheckInToNow;
-(NSDate *)checkInDate;
-(NSDate *)intervalStartDate;
-(id)checkInKey;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class NSDate, NSUserDefaults;

@interface VCDailyMetricCheckIn : NSObject {

	NSDate* _currentDate;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentDate;                  //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * checkInDate; 
+(id)recentCheckIn;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(NSDate *)currentDate;
-(void)updateCheckInToNow;
-(BOOL)isCheckInAllowed;
-(id)initWithCurrentDate:(id)arg1 defaults:(id)arg2 ;
-(NSDate *)checkInDate;
@end


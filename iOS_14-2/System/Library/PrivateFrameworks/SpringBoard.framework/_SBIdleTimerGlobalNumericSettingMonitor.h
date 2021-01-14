/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/_SBIdleTimerGlobalSettingMonitor.h>

@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {

	NSNumber* _settingCache;
	/*^block*/id _fetchSettingFromSource;

}

@property (nonatomic,readonly) NSNumber * numericValue; 
-(BOOL)_updateCache;
-(void)_settingChanged:(id)arg1 ;
-(id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(/*^block*/id)arg4 ;
-(id)formattedValue;
-(void)dealloc;
-(NSNumber *)numericValue;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/_SBIdleTimerGlobalSettingMonitor.h>

@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {

	NSNumber* _settingCache;
	/*^block*/id _fetchSettingFromSource;

}

@property (nonatomic,readonly) NSNumber * numericValue; 
-(void)dealloc;
-(NSNumber *)numericValue;
-(id)formattedValue;
-(BOOL)_updateCache;
-(id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(/*^block*/id)arg4 ;
-(void)_settingChanged:(id)arg1 ;
@end


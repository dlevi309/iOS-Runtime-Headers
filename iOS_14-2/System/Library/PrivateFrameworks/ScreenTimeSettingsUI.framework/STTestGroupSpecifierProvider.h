/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STUsageGroupSpecifierProvider.h>

@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {

	BOOL _isHidden;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(NSTimer *)timer;
-(BOOL)isHidden;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)dealloc;
@end


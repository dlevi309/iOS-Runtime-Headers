/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STUsageGroupSpecifierProvider.h>

@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {

	BOOL _isHidden;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(id)init;
-(void)dealloc;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)timerFired:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class NSDate, NSString;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {

	NSDate* _endDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setEndDate:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateLegibilityStrength;
-(id)_timerFont;
-(id)_newTimerDialForSettings:(id)arg1 ;
-(void)updateTimerLabel;
@end


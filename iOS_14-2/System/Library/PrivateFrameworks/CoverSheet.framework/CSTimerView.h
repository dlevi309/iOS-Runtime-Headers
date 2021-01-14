/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)interItemSpacing;
-(id)init;
-(void)setFont:(id)arg1 ;
-(id)accessoryView;
-(void)_updateLegibilityStrength;
-(void)setEndDate:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
-(id)_timerFont;
-(id)_newTimerDialForSettings:(id)arg1 withFont:(id)arg2 ;
-(void)updateTimerLabel;
@end


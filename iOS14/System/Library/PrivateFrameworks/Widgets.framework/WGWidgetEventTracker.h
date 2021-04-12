/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@class NSDateComponents, NSDate, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject {

	NSDateComponents* _previousTodayViewAppearDateComponents;
	NSDate* _previousTodayViewAppearanceDate;
	NSMutableDictionary* _previousWidgetAppearanceDateByIdentifier;
	unsigned long long _location;
	PETDistributionEventTracker* _widgetLingerTracker;
	PETScalarEventTracker* _widgetShownTracker;
	PETScalarEventTracker* _widgetStatusTracker;
	PETDistributionEventTracker* _widgetListLingerTracker;
	PETScalarEventTracker* _widgetToggleContractTracker;
	PETScalarEventTracker* _widgetToggleExpandTracker;
	PETScalarEventTracker* _widgetListShownTracker;
	PETScalarEventTracker* _widgetToggleContract;
	PETScalarEventTracker* _widgetToggleExpand;
	BOOL _authenticated;

}
+(id)sharedInstance;
-(id)_statusProperty;
-(void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 ;
-(void)widgetListDidDisappearAtLocation:(unsigned long long)arg1 ;
-(void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 ;
-(id)init;
-(void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 duration:(double)arg3 ;
-(void)widget:(id)arg1 didDisappearInMode:(long long)arg2 ;
-(id)_widgetLingerTracker;
-(void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 duration:(double)arg5 ;
-(id)_widgetListLingerTracker;
-(void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(BOOL)arg2 ;
-(void)_trackWidgetContractEventForWidget:(id)arg1 ;
-(void)_lockedStateDidChange;
-(void)widgetViewDidDisappearWithWidget:(id)arg1 ;
-(id)_authenticationProperty;
-(void)widgetViewDidAppearWithWidget:(id)arg1 ;
-(void)_trackWidgetExpandEventForWidget:(id)arg1 ;
-(void)widget:(id)arg1 didAppearInMode:(long long)arg2 ;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2 ;
-(id)widgetToggleExpandTracker;
-(id)_widgetStatusTracker;
-(id)_widgetProperty;
-(id)_widgetShownTracker;
-(id)_widgetToggleContractTracker;
-(void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3 ;
-(id)widgetListShownTracker;
-(id)_modeProperty;
-(id)_locationProperty;
-(void)dealloc;
@end


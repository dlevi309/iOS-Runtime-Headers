/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
*/


@protocol OS_dispatch_queue;
#import <ProactiveWidgetTracker/ProactiveWidgetTracker-Structs.h>
@class NSString, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSObject;

@interface _PWTWidgetEventTracker : NSObject {

	NSString* _identifier;
	PETScalarEventTracker* _resizeTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _updateTracker;
	PETDistributionEventTracker* _screenLingerTracker;
	PETScalarEventTracker* _foregroundingTracker;
	BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
	BOOL _isCurrentlyVisible;
	BOOL _willBecomeVisible;
	BOOL _didBecomeVisibleWhileLocked;
	BOOL _widgetIsForeground;
	BOOL _widgetWasEverForeground;
	long long _activeDisplayMode;
	double _lastAppearTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)widgetWillAppear;
-(void)widgetDidDisappear;
-(void)widgetWillDisappear;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)widgetPerformedUpdateWithResult:(unsigned long long)arg1 ;
-(void)widgetDidAppear;
-(void)widgetDidBecomeForeground:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)userEngagedWithWidget;
-(id)initWithIdentifier:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol ATXWidgetDwellTrackerDelegate;
@class NSMutableDictionary;

@interface ATXWidgetDwellTracker : NSObject {

	NSMutableDictionary* _widgetUniqueIdToAppearDateMap;
	id<ATXWidgetDwellTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXWidgetDwellTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ATXWidgetDwellTrackerDelegate>)delegate;
-(void)setDelegate:(id<ATXWidgetDwellTrackerDelegate>)arg1 ;
-(void)widgetDidAppear:(id)arg1 date:(id)arg2 ;
-(void)widgetDidDisappear:(id)arg1 date:(id)arg2 ;
-(void)resetAllTracking;
@end


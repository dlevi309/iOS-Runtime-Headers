/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKOverlayContext <NSObject>
@optional
-(void)overlayStateWillChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
-(void)overlayStateDidChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
-(void)invalidateContextItem;
-(id)baseDisplayTypeForOverlay:(long long)arg1;
-(id)baseDisplayTypeForOverlay:(long long)arg1;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(BOOL)unselectedContextShouldUseContextBaseType;

@required
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1;

@end


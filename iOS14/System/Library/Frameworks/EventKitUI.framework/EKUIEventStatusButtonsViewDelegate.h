/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUIEventStatusButtonsViewDelegate <NSObject>
@optional
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1;
-(id)eventStatusButtonsViewButtonFont:(id)arg1;
-(void)statusButtonsDidLayout;

@required
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(/*^block*/id)arg3;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;

@end


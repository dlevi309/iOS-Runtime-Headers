/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPMapTemplateProviding <CPBaseTemplateProviding>
@required
-(void)setHostGuidanceBackgroundColor:(id)arg1;
-(void)setHostTripEstimateStyle:(unsigned long long)arg1;
-(void)setHostAutoHidesNavigationBar:(BOOL)arg1;
-(void)setHostHidesButtonsWithNavigationBar:(BOOL)arg1;
-(void)setMapButton:(id)arg1 hidden:(BOOL)arg2;
-(void)setMapButton:(id)arg1 focusedImage:(id)arg2;
-(void)hostSetMapButton:(id)arg1 imageSet:(id)arg2;
-(void)hostSetMapButtons:(id)arg1;
-(void)setHostTripPreviews:(id)arg1 textConfiguration:(id)arg2 previewOnlyRouteChoices:(BOOL)arg3 selectedIndex:(unsigned long long)arg4;
-(void)hostUpdateTravelEstimates:(id)arg1 forTripIdentifier:(id)arg2;
-(void)hostSetPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(void)hostPanInterfaceVisible:(/*^block*/id)arg1;
-(void)showNavigationAlert:(id)arg1 animated:(BOOL)arg2;
-(void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)updateNavigationAlert:(id)arg1;

@end


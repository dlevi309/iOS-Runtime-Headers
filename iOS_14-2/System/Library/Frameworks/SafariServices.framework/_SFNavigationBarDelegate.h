/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFNavigationBarDelegate <NSObject>
@optional
-(void)navigationBarDoneButtonWasTapped:(id)arg1;
-(void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg1;
-(void)navigationBarDidLayoutSubviews:(id)arg1;
-(void)navigationBar:(id)arg1 didProduceNavigationIntent:(id)arg2;
-(id)itemProviderForNavigationBar:(id)arg1;
-(id)currentContentUUIDForNavigationBar:(id)arg1;
-(long long)dataOwnerForNavigationBar:(id)arg1;
-(void)navigationBarDidUpdateBackdropEffect:(id)arg1;
-(void)navigationBar:(id)arg1 didCreateLeadingToolbar:(id)arg2 trailingToolbar:(id)arg3;
-(void)navigationBarMetricsDidChange:(id)arg1;
-(void)navigationBarFormatMenuButtonStartedInteraction:(id)arg1;
-(void)navigationBarURLWasTapped:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)navigationBarTranslateButtonWasTapped:(id)arg1;
-(void)navigationBarFormatMenuButtonWasTapped:(id)arg1;
-(void)navigationBarMediaStateMuteButtonWasTapped:(id)arg1;

@required
-(void)navigationBarCancelButtonWasTapped:(id)arg1;
-(id)navigationBarURLForSharing:(id)arg1;
-(void)navigationBarReloadButtonWasTapped:(id)arg1;
-(void)navigationBarReaderButtonWasTapped:(id)arg1;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
-(void)compressedNavigationBarWasTapped:(id)arg1;

@end


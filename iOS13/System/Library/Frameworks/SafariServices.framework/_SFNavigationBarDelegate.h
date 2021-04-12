/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFNavigationBarDelegate <NSObject>
@optional
-(void)navigationBarDidUpdateBackdropEffect:(id)arg1;
-(void)navigationBar:(id)arg1 didCreateLeadingToolbar:(id)arg2 trailingToolbar:(id)arg3;
-(void)navigationBarMetricsDidChange:(id)arg1;
-(void)navigationBarFormatMenuButtonStartedInteraction:(id)arg1;
-(void)navigationBarURLWasTapped:(id)arg1;
-(void)navigationBarFormatMenuButtonWasTapped:(id)arg1;
-(void)navigationBarMediaCaptureMuteButtonWasTapped:(id)arg1;
-(void)navigationBarDoneButtonWasTapped:(id)arg1;
-(void)navigationBarFormatMenuButtonBecameUnavailable:(id)arg1;
-(void)navigationBar:(id)arg1 didProduceNavigationIntent:(id)arg2;
-(id)itemProviderForNavigationBar:(id)arg1;
-(id)currentContentUUIDForNavigationBar:(id)arg1;
-(long long)dataOwnerForNavigationBar:(id)arg1;

@required
-(void)navigationBarReloadButtonWasTapped:(id)arg1;
-(void)navigationBarReaderButtonWasTapped:(id)arg1;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg1;
-(void)compressedNavigationBarWasTapped:(id)arg1;
-(void)navigationBarCancelButtonWasTapped:(id)arg1;
-(id)navigationBarURLForSharing:(id)arg1;

@end


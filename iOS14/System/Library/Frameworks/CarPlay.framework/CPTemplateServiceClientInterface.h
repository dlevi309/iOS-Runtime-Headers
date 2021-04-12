/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPTemplateServiceClientInterface <CPBannerDelegate>
@required
-(void)clientExceededHierarchyDepthLimit;
-(void)clientPushedIllegalTemplateOfClass:(id)arg1;
-(void)clientExceededTabBarTabLimit;
-(void)clientExceededAudioMetadataThrottleLimit;
-(void)templateIdentifierDidPop:(id)arg1;
-(void)templateIdentifierDidDismiss:(id)arg1;
-(void)updateInterestingLayoutGuideWithInsets:(UIEdgeInsets)arg1;
-(void)clientPushNowPlayingTemplateAnimated:(BOOL)arg1;

@end


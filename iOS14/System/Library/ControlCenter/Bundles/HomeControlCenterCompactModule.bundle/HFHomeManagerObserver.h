/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/


@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>
@optional
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
-(void)homeManagerDidFinishUnknownChange:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateLocationSensingAvailability:(BOOL)arg2;

@end


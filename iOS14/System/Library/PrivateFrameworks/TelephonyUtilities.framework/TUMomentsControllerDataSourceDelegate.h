/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUMomentsControllerDataSourceDelegate <NSObject>
@required
-(void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
-(void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2;
-(void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
-(void)serverDiedForDataSource:(id)arg1;

@end


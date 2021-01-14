/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol CPSSessionProxyDelegate <NSObject>
@optional
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2;
-(void)proxyDidUpdateMetadata:(id)arg1;
-(void)proxyDidChangeProgress:(id)arg1;
-(void)proxyDidInstallApplicationPlaceholder:(id)arg1;
-(void)proxyDidRetrieveBusinessIcon:(id)arg1;
-(void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2;
-(void)proxy:(id)arg1 didRetrieveHeroImage:(id)arg2;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
-(void)proxyAppDidLaunchForTesting:(id)arg1;
-(void)proxyRemoteServiceDidCrash:(id)arg1;

@end


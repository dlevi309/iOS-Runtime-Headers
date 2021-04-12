/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@interface ADClient : NSObject
+(id)sharedClient;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(void)segmentDataForSignedInUserWithBlock:(/*^block*/id)arg1 ;
-(void)prepareForAdRequests;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)determineAppInstallationAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
@end


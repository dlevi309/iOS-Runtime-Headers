/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@interface ADClient : NSObject
+(id)sharedClient;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
-(void)prepareForAdRequests;
-(void)determineAppInstallationAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)segmentDataForSignedInUserWithBlock:(/*^block*/id)arg1 ;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
@end


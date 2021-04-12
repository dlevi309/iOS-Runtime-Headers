/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKHeadphoneAudioExposureControlClient.h>

@class HKProxyProvider, NSString;

@interface HKHeadphoneAudioExposureControl : NSObject <_HKXPCExportable, HKHeadphoneAudioExposureControlClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)rebuildWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(BOOL)arg4 synced:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchDoseLimitInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)overrideDoseLimit:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


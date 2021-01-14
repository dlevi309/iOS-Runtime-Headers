/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HKHeadphoneAudioExposureControlServer.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDHearingProfileExtension, HDHealthStoreClient, NSObject, NSString;

@interface HDHeadphoneAudioExposureControlServer : HDStandardTaskServer <HDDiagnosticObject, HKHeadphoneAudioExposureControlServer> {

	HDProfile* _profile;
	HDHearingProfileExtension* _profileExtension;
	HDHealthStoreClient* _client;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)diagnosticDescription;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(id)_headphoneProvenanceForRemoteDevice:(BOOL)arg1 ;
-(id)_headphoneProvenanceForRemoteWatch;
-(id)_makeAirPods;
-(id)_makeEarPods;
-(id)_makeBeatsHeadphones;
-(id)_makeUnknownHeadphones;
-(void)remote_rebuildWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(BOOL)arg4 synced:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)remote_fetchDoseLimitWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_overrideDoseLimit:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


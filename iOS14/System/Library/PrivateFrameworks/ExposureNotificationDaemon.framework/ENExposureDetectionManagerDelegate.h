/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol ENExposureDetectionManagerDelegate
@required
-(id)exposureDetectionManager:(id)arg1 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg2 error:(id*)arg3;
-(id)activeRegionForExposureDetectionManager:(id)arg1;
-(void)exposureDetectionManager:(id)arg1 errorDetected:(unsigned)arg2;
-(void)exposureDetectionManager:(id)arg1 finishedSessionWithResult:(id)arg2;

@end


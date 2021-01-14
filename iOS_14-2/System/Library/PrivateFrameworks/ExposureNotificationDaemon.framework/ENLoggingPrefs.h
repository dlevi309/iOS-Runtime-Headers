/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@interface ENLoggingPrefs : NSObject {

	BOOL _sensitiveLoggingEnabled;
	BOOL _rpiLoggingEnabled;

}
+(id)sharedENLoggingPrefs;
-(id)init;
-(void)loadLoggingPrefs;
-(void)setLoggingEntitledApp:(BOOL)arg1 ;
-(BOOL)isSensitiveLoggingAllowed;
-(BOOL)isRPILoggingAllowed;
@end


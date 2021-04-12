/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSString;


@protocol HDHealthPlugin <NSObject>
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@optional
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(id)listenerEndpointForClient:(id)arg1 error:(id*)arg2;
-(BOOL)daemonDidReceiveNotification:(const char*)arg1;
-(id)deepBreathingServerForClient:(id)arg1 configuration:(id)arg2 healthDaemon:(id)arg3 delegate:(id)arg4;
-(id)dataCollectors;

@required
-(NSString *)pluginIdentifier;
-(void)activate;
-(id)initWithHealthDaemon:(id)arg1;

@end


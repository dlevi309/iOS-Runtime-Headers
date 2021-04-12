/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>
#import <libobjc.A.dylib/APMetricDaemonDeliverer.h>
#import <libobjc.A.dylib/APMetricNotificationRegisterOwner.h>
#import <libobjc.A.dylib/APMetricReceiving.h>

@protocol APMetricNotificationRegisterAPMetricReceiving;
@class NSString;

@interface APMetricDaemonDelivery : APXPCActionRequester <APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving> {

	id<APMetricNotificationRegister><APMetricReceiving> _notificationRegistrar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<APMetricNotificationRegister><APMetricReceiving> notificationRegistrar;              //@synthesize notificationRegistrar=_notificationRegistrar - In the implementation block
+(id)machService;
+(BOOL)canShareConnection;
+(id)daemonDelivery;
+(void)setDaemonDelivery:(id)arg1 ;
-(void)connectionInvalidated;
-(id)init;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1 ;
-(void)receivedMetric:(id)arg1 ;
-(id<APMetricNotificationRegister><APMetricReceiving>)notificationRegistrar;
@end


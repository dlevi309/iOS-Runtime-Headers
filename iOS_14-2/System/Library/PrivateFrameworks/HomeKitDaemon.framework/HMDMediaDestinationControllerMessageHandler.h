/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAppleMediaAccessoryMessageHandler.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDMediaDestinationControllerMessageHandlerDataSource, HMDMediaDestinationControllerMessageHandlerDelegate;
@class HMDMediaDestinationControllerMetricsEventDispatcher, NSString;

@interface HMDMediaDestinationControllerMessageHandler : HMDAppleMediaAccessoryMessageHandler <HMFLogging> {

	id<HMDMediaDestinationControllerMessageHandlerDataSource> _dataSource;
	id<HMDMediaDestinationControllerMessageHandlerDelegate> _delegate;
	HMDMediaDestinationControllerMetricsEventDispatcher* _metricsEventDispatcher;

}

@property (__weak) id<HMDMediaDestinationControllerMessageHandlerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationControllerMessageHandlerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher * metricsEventDispatcher;              //@synthesize metricsEventDispatcher=_metricsEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDMediaDestinationControllerMessageHandlerDelegate>)delegate;
-(id<HMDMediaDestinationControllerMessageHandlerDataSource>)dataSource;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDMediaDestinationControllerMessageHandlerDelegate>)arg1 ;
-(void)setDataSource:(id<HMDMediaDestinationControllerMessageHandlerDataSource>)arg1 ;
-(void)handleMediaSystemAddedNotification:(id)arg1 ;
-(void)handleMediaSystemRemovedNotification:(id)arg1 ;
-(HMDMediaDestinationControllerMetricsEventDispatcher *)metricsEventDispatcher;
-(void)setMetricsEventDispatcher:(HMDMediaDestinationControllerMetricsEventDispatcher *)arg1 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg1 ;
-(id)destinationIdentifierInMessage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)upateOptionsInMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 metricsEventDispatcher:(id)arg4 targetDevice:(BOOL)arg5 dataSource:(id)arg6 delegate:(id)arg7 ;
-(void)notifyUpdatedDestinationWithIdentifier:(id)arg1 ;
-(void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg1 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg1 ;
-(void)handleNotificationAccessoryChangedRoom:(id)arg1 ;
-(void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)arg1 ;
@end


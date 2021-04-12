/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaDestinationMessageHandler.h>

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;
@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler {

	id<HMDMediaDestinationsMessageHandlerDataSource> _dataSource;
	id<HMDMediaDestinationsMessageHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationsMessageHandlerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationsMessageHandlerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<HMDMediaDestinationsMessageHandlerDelegate>)delegate;
-(id<HMDMediaDestinationsMessageHandlerDataSource>)dataSource;
-(void)setDelegate:(id<HMDMediaDestinationsMessageHandlerDelegate>)arg1 ;
-(void)setDataSource:(id<HMDMediaDestinationsMessageHandlerDataSource>)arg1 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(void)handleUpdatedDestination:(id)arg1 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg1 ;
@end


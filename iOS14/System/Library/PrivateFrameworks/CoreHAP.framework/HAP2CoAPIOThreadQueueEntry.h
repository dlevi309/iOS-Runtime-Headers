/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2CoAPIOConsumer;
@class HMFActivity;

@interface HAP2CoAPIOThreadQueueEntry : NSObject {

	BOOL _shouldRegister;
	BOOL _shouldUnregister;
	id<HAP2CoAPIOConsumer> _consumer;
	/*^block*/id _sessionBlock;
	HMFActivity* _activity;

}
@end


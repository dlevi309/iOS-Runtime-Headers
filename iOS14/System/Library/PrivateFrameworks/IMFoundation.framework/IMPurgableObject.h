/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMPurgableObject : NSObject {

	id _instanceObject;
	/*^block*/id _setupBlock;
	/*^block*/id _cleanupBlock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)instance;
-(void)_cleanupInstance;
-(void)_setupInstance;
-(void)_receivedMemoryWarning:(id)arg1 ;
-(id)initWithSetupBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)instance;
-(void)_cleanupInstance;
-(void)_setupInstance;
-(id)initWithSetupBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_receivedMemoryWarning:(id)arg1 ;
@end


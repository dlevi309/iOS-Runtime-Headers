/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <BiometricKit/BKFaceDetectOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, AWUnitTestPearlDevice;

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {

	NSObject*<OS_dispatch_queue> _awQueue;
	NSObject*<OS_dispatch_source> _awInitTimer;
	NSObject*<OS_dispatch_source> _deadlineTimer;
	BOOL _started;
	BOOL _finished;
	AWUnitTestPearlDevice* _unitTestDevice;

}

@property (assign,nonatomic,__weak) AWUnitTestPearlDevice * unitTestDevice;              //@synthesize unitTestDevice=_unitTestDevice - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(long long)state;
-(BOOL)startWithError:(id*)arg1 ;
-(void)startWithReply:(/*^block*/id)arg1 ;
-(void)awFinishWithReason:(long long)arg1 ;
-(void)awDeliverFaceFound;
-(void)awSetFaceFound;
-(void)awSetFaceDetectError;
-(AWUnitTestPearlDevice *)unitTestDevice;
-(void)setUnitTestDevice:(AWUnitTestPearlDevice *)arg1 ;
@end


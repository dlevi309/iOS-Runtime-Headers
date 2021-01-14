/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)startWithError:(id*)arg1 ;
-(void)startWithReply:(/*^block*/id)arg1 ;
-(long long)state;
-(void)cancel;
-(void)dealloc;
-(void)awFinishWithReason:(long long)arg1 ;
-(void)awDeliverFaceFound;
-(void)awSetFaceFound;
-(void)awSetFaceDetectError;
-(AWUnitTestPearlDevice *)unitTestDevice;
-(void)setUnitTestDevice:(AWUnitTestPearlDevice *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_group;
@class BWFigVideoCaptureStream, NSObject, NSArray;

@interface BWStreamStartStopState : NSObject {

	BWFigVideoCaptureStream* _stream;
	NSObject*<OS_dispatch_group> _hasStartedGroup;
	BOOL _hasEnteredStartedGroup;
	NSObject*<OS_dispatch_group> _dependentsHaveStoppedGroup;
	BWStreamStartStopState* _blockingMasterState;
	NSArray* _blockingSlaveStates;
	float _timeoutInSeconds;
	BOOL _waitForMasterAEToSettle;

}

@property (nonatomic,readonly) BWFigVideoCaptureStream * stream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * blockingSlaveStates;                   //@synthesize blockingSlaveStates=_blockingSlaveStates - In the implementation block
@property (assign,nonatomic) BOOL waitForMasterAEToSettle;                    //@synthesize waitForMasterAEToSettle=_waitForMasterAEToSettle - In the implementation block
-(void)dealloc;
-(id)description;
-(BWFigVideoCaptureStream *)stream;
-(BOOL)dependentWillStart;
-(void)dependentDidStop;
-(id)initWithStream:(id)arg1 masterState:(id)arg2 timeoutInSeconds:(float)arg3 ;
-(BOOL)streamWillStart;
-(void)streamDidStart;
-(BOOL)streamWillStop;
-(void)streamDidStop;
-(NSArray *)blockingSlaveStates;
-(void)setBlockingSlaveStates:(NSArray *)arg1 ;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
@end


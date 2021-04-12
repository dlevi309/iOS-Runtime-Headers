/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue;
@class AVCaptureOutput, NSMutableArray, NSObject;

@interface AVCDOSDataOutputStorage : NSObject {

	AVCaptureOutput*<AVCaptureDataOutputDelegateOverride> _dataOutput;
	NSMutableArray* _synchronizedDataQueue;
	NSObject*<OS_dispatch_queue> _delegateOverrideCallbackQueue;
	NSMutableArray* _timestampAdjustmentsDataQueue;
	NSMutableArray* _mdoTimeStampHistoryQueue;

}

@property (nonatomic,readonly) AVCaptureOutput*<AVCaptureDataOutputDelegateOverride> dataOutput;              //@synthesize dataOutput=_dataOutput - In the implementation block
@property (nonatomic,readonly) NSMutableArray * synchronizedDataQueue;                                        //@synthesize synchronizedDataQueue=_synchronizedDataQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue;                    //@synthesize delegateOverrideCallbackQueue=_delegateOverrideCallbackQueue - In the implementation block
@property (getter=isLive,nonatomic,readonly) BOOL live; 
@property (nonatomic,retain) NSMutableArray * timestampAdjustmentsDataQueue;                                  //@synthesize timestampAdjustmentsDataQueue=_timestampAdjustmentsDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * mdoTimeStampHistoryQueue;                                       //@synthesize mdoTimeStampHistoryQueue=_mdoTimeStampHistoryQueue - In the implementation block
-(void)dealloc;
-(BOOL)isLive;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(id)initWithDataOutput:(id)arg1 ;
-(AVCaptureOutput*<AVCaptureDataOutputDelegateOverride>)dataOutput;
-(NSMutableArray *)synchronizedDataQueue;
-(NSMutableArray *)timestampAdjustmentsDataQueue;
-(void)setTimestampAdjustmentsDataQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mdoTimeStampHistoryQueue;
-(void)setMdoTimeStampHistoryQueue:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
-(AVCaptureOutput*<AVCaptureDataOutputDelegateOverride>)dataOutput;
-(id)initWithDataOutput:(id)arg1 ;
-(NSMutableArray *)synchronizedDataQueue;
-(NSMutableArray *)timestampAdjustmentsDataQueue;
-(void)setTimestampAdjustmentsDataQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mdoTimeStampHistoryQueue;
-(void)setMdoTimeStampHistoryQueue:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(BOOL)isLive;
-(void)dealloc;
@end


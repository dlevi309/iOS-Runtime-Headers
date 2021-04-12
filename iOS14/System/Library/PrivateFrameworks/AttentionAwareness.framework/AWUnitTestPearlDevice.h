/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/AWUnitTestSampler.h>

@protocol OS_dispatch_queue, BKDevicePearlDelegate;
@class NSObject, AWUnitTestFaceDetectOperation;

@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler> {

	SCD_Struct_AW4 _sampleStats;
	NSObject*<OS_dispatch_queue> _awQueue;
	AWUnitTestFaceDetectOperation* _lastOperation;
	/*^block*/id _displayCallback;
	/*^block*/id _smartCoverCallback;
	BOOL _facePresent;
	BOOL _pearlError;
	id<BKDevicePearlDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_AW4* _sampleStatsPtr;

}

@property (assign,nonatomic,__weak) id<BKDevicePearlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) SCD_Struct_AW4* sampleStatsPtr;                                   //@synthesize sampleStatsPtr=_sampleStatsPtr - In the implementation block
@property (assign) BOOL facePresent;                                                 //@synthesize facePresent=_facePresent - In the implementation block
@property (assign) BOOL pearlError;                                                  //@synthesize pearlError=_pearlError - In the implementation block
+(id)sharedDevice;
-(id)init;
-(id<BKDevicePearlDelegate>)delegate;
-(void)setDelegate:(id<BKDevicePearlDelegate>)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisplayCallback:(/*^block*/id)arg1 ;
-(void)setDisplayState:(BOOL)arg1 ;
-(void)getStatsWithBlock:(/*^block*/id)arg1 ;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverCallback:(/*^block*/id)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)deliverPearlDeviceState:(long long)arg1 ;
-(void)deliverPearlDeviceEvent:(long long)arg1 ;
-(SCD_Struct_AW4*)sampleStatsPtr;
-(void)setSampleStatsPtr:(SCD_Struct_AW4*)arg1 ;
-(BOOL)facePresent;
-(void)setFacePresent:(BOOL)arg1 ;
-(BOOL)pearlError;
-(void)setPearlError:(BOOL)arg1 ;
@end

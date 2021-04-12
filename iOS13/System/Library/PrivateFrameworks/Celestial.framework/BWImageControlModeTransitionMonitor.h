/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface BWImageControlModeTransitionMonitor : NSObject {

	NSDictionary* _expectedSphereModesByPortType;
	NSDictionary* _expectedMinimumFrameRatesByPortType;
	double _coarseFocusCheckTimeout;
	BOOL _waitForTorchToRampUp;
	NSMutableDictionary* _currentSphereModesByPortType;
	NSMutableDictionary* _currentFrameRatesByPortType;
	SCD_Struct_BW2 _firstFramePTS;
	int _frameWaitCount;
	BOOL _coarseFocusHasSettled;

}

@property (nonatomic,copy) NSDictionary * expectedSphereModesByPortType;                    //@synthesize expectedSphereModesByPortType=_expectedSphereModesByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * expectedMinimumFrameRatesByPortType;              //@synthesize expectedMinimumFrameRatesByPortType=_expectedMinimumFrameRatesByPortType - In the implementation block
@property (assign,nonatomic) double coarseFocusCheckTimeout;                                //@synthesize coarseFocusCheckTimeout=_coarseFocusCheckTimeout - In the implementation block
@property (assign,nonatomic) BOOL waitForTorchToRampUp;                                     //@synthesize waitForTorchToRampUp=_waitForTorchToRampUp - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)isTransitionCompleteWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 masterCaptureStreamPortType:(id)arg2 activeSlaveStreamPortType:(id)arg3 ;
-(NSDictionary *)expectedSphereModesByPortType;
-(void)setExpectedSphereModesByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)expectedMinimumFrameRatesByPortType;
-(void)setExpectedMinimumFrameRatesByPortType:(NSDictionary *)arg1 ;
-(double)coarseFocusCheckTimeout;
-(void)setCoarseFocusCheckTimeout:(double)arg1 ;
-(BOOL)waitForTorchToRampUp;
-(void)setWaitForTorchToRampUp:(BOOL)arg1 ;
@end


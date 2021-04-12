/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWUBProcessorInputDelegate;
@class NSMutableArray, NSMutableDictionary;

@interface BWUBProcessorInput : BWStillImageProcessorInput {

	int _fusionMode;
	id<BWUBProcessorInputDelegate> _delegate;
	NSMutableArray* _frames;
	BOOL _keepFrames;
	int _receivedFrames;
	BOOL _receivedAllFrames;
	opaqueCMSampleBufferRef _referenceFrame;
	opaqueCMSampleBufferRef _errorRecoveryFrame;
	BOOL _emitErrorRecoveryFrame;
	int _adaptiveBracketingStopFrameCount;
	NSMutableDictionary* _oisRecenteringLoggingData;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef originalImage; 
@property (nonatomic,retain) id<BWUBProcessorInputDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL keepFrames; 
@property (nonatomic,readonly) NSMutableDictionary * oisRecenteringLoggingData; 
@property (nonatomic,readonly) int receivedFrames; 
@property (nonatomic,readonly) BOOL receivedAllFrames; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef referenceFrame; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef evMinusReferenceFrame; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef errorRecoveryFrame; 
@property (assign,nonatomic) int fusionMode;                                                 //@synthesize fusionMode=_fusionMode - In the implementation block
@property (assign,nonatomic) BOOL emitErrorRecoveryFrame;                                    //@synthesize emitErrorRecoveryFrame=_emitErrorRecoveryFrame - In the implementation block
-(void)dealloc;
-(id<BWUBProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWUBProcessorInputDelegate>)arg1 ;
-(opaqueCMSampleBufferRef)referenceFrame;
-(id)frames;
-(opaqueCMSampleBufferRef)originalImage;
-(int)receivedFrames;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setEmitErrorRecoveryFrame:(BOOL)arg1 ;
-(void)setFusionMode:(int)arg1 ;
-(void)stopAdaptiveBracketingWithGroup:(int)arg1 ;
-(BOOL)emitErrorRecoveryFrame;
-(opaqueCMSampleBufferRef)errorRecoveryFrame;
-(int)fusionMode;
-(opaqueCMSampleBufferRef)evMinusReferenceFrame;
-(BOOL)receivedAllFrames;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3 ;
-(id)adaptiveBracketingParameters;
-(BOOL)keepFrames;
-(void)setKeepFrames:(BOOL)arg1 ;
-(NSMutableDictionary *)oisRecenteringLoggingData;
-(void)_setReferenceFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)_setErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopAdaptiveBracketingNow;
-(void)updateAdaptiveBracketingFrameParametersIfNeededUsingFrame:(opaqueCMSampleBufferRef)arg1 err:(int)arg2 ;
@end


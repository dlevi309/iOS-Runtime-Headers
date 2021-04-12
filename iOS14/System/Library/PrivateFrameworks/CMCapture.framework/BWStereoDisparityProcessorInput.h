/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWStereoDisparityProcessorInputDelegate;
@interface BWStereoDisparityProcessorInput : BWStillImageProcessorInput {

	id<BWStereoDisparityProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _referenceSbuf;
	opaqueCMSampleBufferRef _auxiliarySbuf;
	BOOL _equalizeTeleGainToMatchReference;
	BOOL _emitAuxiliaryInput;

}

@property (nonatomic,retain) id<BWStereoDisparityProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL equalizeTeleGainToMatchReference;                             //@synthesize equalizeTeleGainToMatchReference=_equalizeTeleGainToMatchReference - In the implementation block
@property (assign,nonatomic) BOOL emitAuxiliaryInput;                                           //@synthesize emitAuxiliaryInput=_emitAuxiliaryInput - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef referenceSbuf;                           //@synthesize referenceSbuf=_referenceSbuf - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxiliarySbuf;                           //@synthesize auxiliarySbuf=_auxiliarySbuf - In the implementation block
-(id<BWStereoDisparityProcessorInputDelegate>)delegate;
-(opaqueCMSampleBufferRef)referenceSbuf;
-(opaqueCMSampleBufferRef)auxiliarySbuf;
-(BOOL)equalizeTeleGainToMatchReference;
-(void)setEqualizeTeleGainToMatchReference:(BOOL)arg1 ;
-(BOOL)emitAuxiliaryInput;
-(void)setEmitAuxiliaryInput:(BOOL)arg1 ;
-(void)setDelegate:(id<BWStereoDisparityProcessorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end


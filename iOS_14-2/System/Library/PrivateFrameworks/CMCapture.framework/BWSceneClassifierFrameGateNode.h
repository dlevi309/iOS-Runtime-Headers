/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode {

	BOOL _discardsBlurryFrames;
	int _maxFrameRate;
	SCD_Struct_BW8 _lastEmittedPTS;
	int _inputFrameCount;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(id)nodeSubType;
-(id)initWithMaxOutputFrameRate:(int)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg1 ;
-(BOOL)discardsBlurryFrames;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode {

	BOOL _discardsBlurryFrames;
	int _maxFrameRate;
	SCD_Struct_BW2 _lastEmittedPTS;
	int _inputFrameCount;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMaxOutputFrameRate:(int)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg1 ;
-(BOOL)discardsBlurryFrames;
@end


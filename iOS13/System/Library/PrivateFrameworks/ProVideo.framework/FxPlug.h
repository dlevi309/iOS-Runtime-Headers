/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxPinCreation.h>
#import <libobjc.A.dylib/FxStreamProviding.h>

@interface FxPlug : NSObject <FxPinCreation, FxStreamProviding> {

	FxPlugPriv* _priv;

}
+(id)pinInPinList:(id)arg1 withUUID:(id)arg2 ;
+(id)fxPlugWithDescriptor:(id)arg1 andHost:(id)arg2 ;
+(unsigned)leastCommonMultipleOfA:(unsigned)arg1 andB:(unsigned)arg2 ;
-(void)dealloc;
-(id)host;
-(id)descriptor;
-(id)inputPins;
-(id)outputPins;
-(id)initWithDescriptor:(id)arg1 andHost:(id)arg2 ;
-(id)createInputPinArray;
-(id)createOutputPinArray;
-(id)imageOutputPin;
-(Class)canvasControlClass;
-(void)setCanvasControlClass:(Class)arg1 ;
-(id)filterImageInputPin;
-(id)transitionImageAInputPin;
-(id)transitionImageBInputPin;
-(void)valueChangedForPin:(id)arg1 ;
-(unsigned)timeScaleForStream:(id)arg1 ;
-(double)startTimeForStream:(id)arg1 ;
-(double)durationForStream:(id)arg1 ;
-(double)frameDurationForStream:(id)arg1 ;
-(BOOL)isStreamPremultiplied:(id)arg1 ;
-(double)pixelAspectForStream:(id)arg1 ;
-(BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2 ;
-(unsigned long long)fieldOrderForSample:(id)arg1 ;
-(BOOL)isSamplePredetermined:(id)arg1 ;
-(id)requiredSamplesForSample:(id)arg1 ;
-(id)evaluateSample:(id)arg1 withOptions:(id)arg2 ;
-(id)domainOfDefinitionForSample:(id)arg1 ;
-(id)inputPinWithUUID:(id)arg1 ;
-(id)outputPinWithUUID:(id)arg1 ;
-(BOOL)renderImageOutputAtTime:(double)arg1 withOptions:(id)arg2 inFxContext:(id)arg3 inRegionOfInterest:(id)arg4 ;
@end


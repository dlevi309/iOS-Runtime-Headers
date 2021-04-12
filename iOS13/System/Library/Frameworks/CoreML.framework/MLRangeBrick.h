/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSString;

@interface MLRangeBrick : NSObject <EspressoBrick> {

	int _size;
	float _start;
	float _stepSize;
	float _startValueParameter;
	float _endValueParameter;
	float _stepSizeValueParameter;

}

@property (nonatomic,readonly) int size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) float stepSize;                            //@synthesize stepSize=_stepSize - In the implementation block
@property (nonatomic,readonly) float startValueParameter;                 //@synthesize startValueParameter=_startValueParameter - In the implementation block
@property (nonatomic,readonly) float endValueParameter;                   //@synthesize endValueParameter=_endValueParameter - In the implementation block
@property (nonatomic,readonly) float stepSizeValueParameter;              //@synthesize stepSizeValueParameter=_stepSizeValueParameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)size;
-(float)start;
-(id)initWithParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1 ;
-(id)computeDynamicOutputShape:(id)arg1 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(float)stepSize;
-(float)startValueParameter;
-(float)endValueParameter;
-(float)stepSizeValueParameter;
@end


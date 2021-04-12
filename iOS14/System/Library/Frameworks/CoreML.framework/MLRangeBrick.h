/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)startValueParameter;
-(float)endValueParameter;
-(float)stepSizeValueParameter;
-(float)start;
-(int)size;
-(float)stepSize;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1 ;
-(id)computeDynamicOutputShape:(id)arg1 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg1 ;
@end


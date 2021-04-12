/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/EspressoBrick.h>

@class NSString;

@interface MLRangeBrickTest : NSObject <EspressoBrick> {

	int _size;
	int _start;
	int _stepSize;

}

@property (nonatomic,readonly) int size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) int start;                           //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) int stepSize;                        //@synthesize stepSize=_stepSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)start;
-(int)size;
-(int)stepSize;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasDynamicOutputShape:(unsigned long long)arg1 ;
-(id)computeDynamicOutputShape:(id)arg1 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg1 ;
@end


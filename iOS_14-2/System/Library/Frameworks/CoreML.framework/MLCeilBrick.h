/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSArray, NSString;

@interface MLCeilBrick : NSObject <EspressoBrick> {

	NSArray* _inputRanks;
	NSArray* _outputRanks;
	NSArray* _inputShapes;
	NSArray* _outputShapes;

}

@property (nonatomic,readonly) NSArray * inputRanks;                //@synthesize inputRanks=_inputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * outputRanks;               //@synthesize outputRanks=_outputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * inputShapes;               //@synthesize inputShapes=_inputShapes - In the implementation block
@property (nonatomic,readonly) NSArray * outputShapes;              //@synthesize outputShapes=_outputShapes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(NSArray *)inputRanks;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(NSArray *)outputRanks;
-(NSArray *)inputShapes;
-(NSArray *)outputShapes;
-(id)initWithParameters:(id)arg1 ;
@end


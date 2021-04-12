/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSArray, NSString;

@interface MLSliceNDBrick : NSObject <EspressoBrick> {

	BOOL _shapeInfoNeeded;
	int _rank;
	NSArray* _begin_ids;
	NSArray* _begin_masks;
	NSArray* _end_ids;
	NSArray* _end_masks;
	NSArray* _strides;
	NSArray* _inputRanks;
	NSArray* _outputRanks;
	NSArray* _inputShapes;
	NSArray* _outputShapes;

}

@property (nonatomic,readonly) int rank;                            //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL shapeInfoNeeded;                //@synthesize shapeInfoNeeded=_shapeInfoNeeded - In the implementation block
@property (nonatomic,readonly) NSArray * begin_ids;                 //@synthesize begin_ids=_begin_ids - In the implementation block
@property (nonatomic,readonly) NSArray * begin_masks;               //@synthesize begin_masks=_begin_masks - In the implementation block
@property (nonatomic,readonly) NSArray * end_ids;                   //@synthesize end_ids=_end_ids - In the implementation block
@property (nonatomic,readonly) NSArray * end_masks;                 //@synthesize end_masks=_end_masks - In the implementation block
@property (nonatomic,readonly) NSArray * strides;                   //@synthesize strides=_strides - In the implementation block
@property (nonatomic,readonly) NSArray * inputRanks;                //@synthesize inputRanks=_inputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * outputRanks;               //@synthesize outputRanks=_outputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * inputShapes;               //@synthesize inputShapes=_inputShapes - In the implementation block
@property (nonatomic,readonly) NSArray * outputShapes;              //@synthesize outputShapes=_outputShapes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParameters:(id)arg1 ;
-(NSArray *)strides;
-(int)rank;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(BOOL)shapeInfoNeeded;
-(NSArray *)inputRanks;
-(NSArray *)outputRanks;
-(NSArray *)inputShapes;
-(NSArray *)outputShapes;
-(NSArray *)begin_ids;
-(NSArray *)begin_masks;
-(NSArray *)end_ids;
-(NSArray *)end_masks;
@end


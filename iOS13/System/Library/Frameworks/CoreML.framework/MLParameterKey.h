/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLKey.h>

@interface MLParameterKey : MLKey
+(id)weights;
+(id)learningRate;
+(id)momentum;
+(id)seed;
+(id)shuffle;
+(id)miniBatchSize;
+(id)beta1;
+(id)beta2;
+(id)eps;
+(id)epochs;
+(id)numberOfNeighbors;
+(id)linkedModelFileName;
+(id)linkedModelSearchPath;
+(id)biases;
-(id)initWithKeyName:(id)arg1 ;
-(id)scopedTo:(id)arg1 ;
-(id)deletingPrefixingScope:(id)arg1 ;
@end


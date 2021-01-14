/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLMutableDenseVector, NSString;

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol> {

	PMLMutableDenseVector* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int length; 
+(id)modelWeightsFromFloats:(id)arg1 ;
+(id)modelWeightsOfLength:(int)arg1 rng:(id)arg2 ;
+(id)modelWeightsOfLength:(int)arg1 ;
+(id)modelWeightsOfLength:(int)arg1 rngSeed:(unsigned long long)arg2 ;
+(id)zeroWeightsOfLength:(int)arg1 ;
+(id)constWeightsOfLength:(int)arg1 value:(float)arg2 ;
+(id)weightsFromNumbers:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(float*)values;
-(int)length;
-(id)copy;
-(id)initWithCount:(int)arg1 ;
-(id)toDictionary;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1 ;
-(id)sliceFrom:(int)arg1 to:(int)arg2 ;
-(void)processValuesInPlaceWithBlock:(/*^block*/id)arg1 ;
-(id)initModelWeightsFromFloats:(id)arg1 ;
-(id)asMutableDenseVector;
-(id)weightsByAppendingWeights:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLDictionarySerializableProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLMutableDenseVector, NSString;

@interface PMLModelWeights : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {

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
-(int)length;
-(id)copy;
-(float*)values;
-(id)initWithCount:(int)arg1 ;
-(id)toDictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1 ;
-(id)sliceFrom:(int)arg1 to:(int)arg2 ;
-(void)processValuesInPlaceWithBlock:(/*^block*/id)arg1 ;
-(id)initModelWeightsFromFloats:(id)arg1 ;
-(id)asMutableDenseVector;
-(id)weightsByAppendingWeights:(id)arg1 ;
@end


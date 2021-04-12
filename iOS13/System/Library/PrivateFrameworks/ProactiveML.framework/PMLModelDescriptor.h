/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLDictionarySerializableProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSString, NSNumber, PMLModelWeights, PMLModelLearningRates;

@interface PMLModelDescriptor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSString* _name;
	NSNumber* _version;
	PMLModelWeights* _weights;
	PMLModelLearningRates* _learningRates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * version;                                 //@synthesize version=_version - In the implementation block
@property (retain) PMLModelWeights * weights;                          //@synthesize weights=_weights - In the implementation block
@property (retain) PMLModelLearningRates * learningRates;              //@synthesize learningRates=_learningRates - In the implementation block
+(BOOL)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id*)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(PMLModelWeights *)weights;
-(void)setWeights:(PMLModelWeights *)arg1 ;
-(id)toDictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(PMLModelLearningRates *)learningRates;
-(void)setLearningRates:(PMLModelLearningRates *)arg1 ;
@end


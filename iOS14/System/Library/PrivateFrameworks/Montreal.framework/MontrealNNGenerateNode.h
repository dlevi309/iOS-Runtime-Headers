/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


#import <Montreal/Montreal-Structs.h>
@class MontrealNNModelNode;

@interface MontrealNNGenerateNode : NSObject {

	unsigned long long _weightIter;
	MontrealNNModelNode* _node;
	unsigned long long _weightDataFormat;
	SCD_Struct_Mo4* _parameters;

}

@property (readonly) SCD_Struct_Mo4* parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long weightIter;                    //@synthesize weightIter=_weightIter - In the implementation block
@property (readonly) MontrealNNModelNode * node;                       //@synthesize node=_node - In the implementation block
@property (readonly) unsigned long long weightDataFormat;              //@synthesize weightDataFormat=_weightDataFormat - In the implementation block
-(SCD_Struct_Mo4*)parameters;
-(void)setInputs:(id)arg1 ;
-(MontrealNNModelNode *)node;
-(void)setInput:(id)arg1 inputIndex:(long long)arg2 ;
-(id)initWithParameters:(SCD_Struct_Mo4*)arg1 weightDataFormat:(unsigned long long)arg2 ;
-(unsigned long long)generateNode:(id)arg1 node:(id)arg2 weightIter:(unsigned long long)arg3 inputs:(id)arg4 outputs:(id)arg5 ;
-(unsigned long long)weightIter;
-(unsigned long long)weightDataFormat;
-(id)dataFromWeights:(float*)arg1 length:(unsigned long long)arg2 ;
@end


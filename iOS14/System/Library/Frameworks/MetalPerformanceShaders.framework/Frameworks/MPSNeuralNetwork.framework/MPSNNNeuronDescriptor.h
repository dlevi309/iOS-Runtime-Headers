/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying, NSSecureCoding> {

	int _neuronType;
	float _a;
	float _b;
	float _c;
	NSData* _data;
	BOOL _noCopy;
	unsigned long long _count;

}

@property (assign,nonatomic) int neuronType;              //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,a,nonatomic) float a;                   //@synthesize a=_a - In the implementation block
@property (assign,b,nonatomic) float b;                   //@synthesize b=_b - In the implementation block
@property (assign,c,nonatomic) float c;                   //@synthesize c=_c - In the implementation block
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 ;
+(id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(BOOL)arg2 ;
-(float)b;
-(float)c;
-(void)setC:(float)arg1 ;
-(void)setB:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NeuronInfo)neuronInfo;
-(void)setData:(NSData *)arg1 ;
-(void)initializeWithPReLUWithData:(id)arg1 noCopy:(BOOL)arg2 ;
-(void)initializeWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(void)setA:(float)arg1 ;
-(NSData *)data;
-(void)setNeuronType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(float)a;
-(id)initWithPReLUWithData:(id)arg1 noCopy:(BOOL)arg2 ;
-(int)neuronType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end


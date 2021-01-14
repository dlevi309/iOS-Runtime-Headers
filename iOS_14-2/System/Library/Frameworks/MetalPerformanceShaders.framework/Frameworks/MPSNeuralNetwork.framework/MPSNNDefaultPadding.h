/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNNPadding.h>

@class NSString;

@interface MPSNNDefaultPadding : NSObject <MPSNNPadding> {

	unsigned long long _method;
	BOOL _mpsOwned;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)paddingWithMethod:(unsigned long long)arg1 ;
+(id)paddingForTensorflowAveragePooling;
+(id)paddingForTensorflowAveragePoolingValidOnly;
+(id)zeroPaddingWithTopAmount:(unsigned long long)arg1 bottomAmount:(unsigned long long)arg2 leftAmount:(unsigned long long)arg3 rightAmount:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(unsigned long long)paddingMethod;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaddingMethod:(unsigned long long)arg1 ;
@end


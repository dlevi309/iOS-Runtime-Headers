/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(unsigned long long)paddingMethod;
-(id)initWithPaddingMethod:(unsigned long long)arg1 ;
@end


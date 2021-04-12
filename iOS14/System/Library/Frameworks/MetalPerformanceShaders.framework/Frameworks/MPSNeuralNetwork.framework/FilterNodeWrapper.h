/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FilterNodeWrapper : NSObject <NSSecureCoding> {

	FilterGraphNode* node;

}
+(BOOL)supportsSecureCoding;
+(id)wrapperWithFilterNode:(FilterGraphNode*)arg1 ;
-(FilterGraphNode*)node;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFilterNode:(FilterGraphNode*)arg1 ;
-(void)dealloc;
@end


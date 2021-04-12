/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FilterNodeWrapper : NSObject <NSSecureCoding> {

	FilterGraphNode* node;

}
+(BOOL)supportsSecureCoding;
+(id)wrapperWithFilterNode:(FilterGraphNode*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FilterGraphNode*)node;
-(id)initWithFilterNode:(FilterGraphNode*)arg1 ;
@end


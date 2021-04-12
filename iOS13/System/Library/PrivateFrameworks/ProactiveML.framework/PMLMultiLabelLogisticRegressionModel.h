/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLMultiLabelRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSArray, PMLModelFullyConnectedLayer, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelRegressionModelProtocol, PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSArray* _models;
	PMLModelFullyConnectedLayer* _layer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)pyClass;
-(unsigned long long)count;
-(id)serialize;
-(id)predict:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)initWithModels:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)classify:(id)arg1 ;
-(id)initWithWeightsArray:(id)arg1 andIntercept:(BOOL)arg2 ;
-(void)convertToLayerWithDataType:(int)arg1 ;
@end


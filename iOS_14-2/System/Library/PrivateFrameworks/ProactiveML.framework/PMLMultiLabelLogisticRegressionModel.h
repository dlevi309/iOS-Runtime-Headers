/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLMultiLabelClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSArray, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSArray* _models;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serialize;
-(id)predict:(id)arg1 ;
-(id)initWithModels:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
-(id)initWithWeightsArray:(id)arg1 andIntercept:(BOOL)arg2 ;
@end


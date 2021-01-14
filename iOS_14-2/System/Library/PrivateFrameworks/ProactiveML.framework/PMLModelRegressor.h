/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLDenseVector, NSString;

@interface PMLModelRegressor : NSObject <PMLPlistAndChunksSerializableProtocol> {

	PMLDenseVector* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int count; 
+(id)modelRegressorFromFloat:(float)arg1 ;
+(id)modelRegressorFromFloats:(id)arg1 ;
+(id)regressorVectorFrom:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(id)init;
-(const float*)values;
-(int)count;
-(id)toDictionary;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1 ;
-(id)denseVector;
-(id)initModelRegressorFromFloats:(id)arg1 ;
-(id)initWithRegressorFromFloat:(float)arg1 ;
-(id)regressorFor:(int)arg1 ;
-(const float*)inverseValues;
@end


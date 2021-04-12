/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelClassifierProtocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol> {

	id _backingObject;
	const float* _weights;
	int _length;
	BOOL _intercept;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)predict:(id)arg1 ;
-(id)toChunk;
-(BOOL)intercept;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
-(id)initWithWeights:(id)arg1 intercept:(BOOL)arg2 ;
-(id)initWithChunk:(id)arg1 intercept:(BOOL)arg2 ;
-(id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(BOOL)arg3 ;
@end


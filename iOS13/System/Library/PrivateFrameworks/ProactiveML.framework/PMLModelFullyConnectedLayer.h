/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSData, NSString;

@interface PMLModelFullyConnectedLayer : NSObject <PMLPlistAndChunksSerializableProtocol> {

	unsigned long long _inputLen;
	unsigned long long _outputLen;
	int _activationType;
	int _dataType;
	float _dataScale;
	NSData* _weights;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void*)_createActivationFilterWithLength:(unsigned long long)arg1 activationType:(int)arg2 ;
-(id)weights;
-(id)predict:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 activationType:(int)arg3 dataType:(int)arg4 dataScale:(float)arg5 weights:(id)arg6 ;
-(id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 dataType:(int)arg3 values:(const float*)arg4 ;
-(unsigned long long)modelCount;
-(void*)_createFullyConnectedLayerFilter;
-(void)_multiplySparseVector:(id)arg1 output:(float*)arg2 ;
-(id)predictWithDenseVector:(id)arg1 ;
-(id)batchPredictWithDenseMatrix:(id)arg1 ;
@end


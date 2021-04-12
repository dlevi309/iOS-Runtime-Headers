/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSMutableData, NSMutableArray;

@interface PASNeuralNetworkBuilder : NSObject {

	unsigned long long _prevSize;
	unsigned long long _nlayers;
	NSMutableData* _descriptors;
	NSMutableArray* _weightsAndBiases;
	BOOL _haveOutputLayer;
	BOOL _done;

}
-(id)init;
-(id)serialize;
-(id)initWithInputSize:(unsigned long long)arg1 ;
-(void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5 ;
-(void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5 ;
@end


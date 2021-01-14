/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSMutableData, NSMutableArray;

@interface PPNeuralNetworkBuilder : NSObject {

	unsigned long long _prevSize;
	unsigned long long _nlayers;
	NSMutableData* _descriptors;
	NSMutableArray* _weightsAndBiases;
	BOOL _haveOutputLayer;
	BOOL _done;

}
-(id)serialize;
-(id)init;
-(id)initWithInputSize:(unsigned long long)arg1 ;
-(void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5 ;
-(void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5 ;
@end


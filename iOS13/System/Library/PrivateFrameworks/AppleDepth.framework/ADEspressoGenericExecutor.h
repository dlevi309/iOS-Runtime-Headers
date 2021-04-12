/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSMutableDictionary;

@interface ADEspressoGenericExecutor : NSObject {

	void* _ctx;
	void* _plan;
	SCD_Struct_AD4* _net;
	NSMutableDictionary* _inputsMap;
	NSMutableDictionary* _outputsMap;
	BOOL _CPUBindWA;

}
-(void)dealloc;
-(long long)execute;
-(id)networkVersionString;
-(int)bindBuffers:(id)arg1 toMap:(id)arg2 withMode:(int)arg3 ;
-(void*)getBufferWithName:(id)arg1 fromMap:(id)arg2 ;
-(long long)bindAsVImage:(CVBufferRef)arg1 name:(id)arg2 ;
-(id)initWithUrl:(id)arg1 inputNamesForBind:(id)arg2 outputNamesForBind:(id)arg3 forEngine:(unsigned long long)arg4 configurationName:(id)arg5 ;
-(void*)getInputBufferWithName:(id)arg1 ;
-(void*)getOutputBufferWithName:(id)arg1 ;
-(void*)getBufferWithName:(id)arg1 ;
-(long long)bindPixelBuffer:(CVBufferRef)arg1 name:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class PASymbolHandle;

@interface PASymbolHandleWithKernelBool : NSObject {

	BOOL _isKernel;
	PASymbolHandle* _symbolHandle;

}

@property (retain) PASymbolHandle * symbolHandle;              //@synthesize symbolHandle=_symbolHandle - In the implementation block
@property (assign) BOOL isKernel;                              //@synthesize isKernel=_isKernel - In the implementation block
-(BOOL)isKernel;
-(PASymbolHandle *)symbolHandle;
-(void)setSymbolHandle:(PASymbolHandle *)arg1 ;
-(void)setIsKernel:(BOOL)arg1 ;
@end


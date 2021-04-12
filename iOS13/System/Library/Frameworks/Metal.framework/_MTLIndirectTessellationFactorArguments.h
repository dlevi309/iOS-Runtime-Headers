/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _MTLIndirectTessellationFactorArguments : NSObject {

	void* _virtualAddress;
	unsigned long long _instanceStride;
	float _scale;

}

@property (assign,nonatomic) void* virtualAddress;                           //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long instanceStride;              //@synthesize instanceStride=_instanceStride - In the implementation block
@property (assign,nonatomic) float scale;                                    //@synthesize scale=_scale - In the implementation block
-(float)scale;
-(void)setScale:(float)arg1 ;
-(void*)virtualAddress;
-(void)setVirtualAddress:(void*)arg1 ;
-(unsigned long long)instanceStride;
-(void)setInstanceStride:(unsigned long long)arg1 ;
@end


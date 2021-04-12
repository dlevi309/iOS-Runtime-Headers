/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void*)virtualAddress;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(void)setVirtualAddress:(void*)arg1 ;
-(unsigned long long)instanceStride;
-(void)setInstanceStride:(unsigned long long)arg1 ;
@end


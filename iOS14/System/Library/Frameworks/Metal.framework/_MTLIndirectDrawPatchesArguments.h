/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _MTLIndirectDrawPatchesArguments : NSObject {

	unsigned long long _numberOfPatchControlPoints;
	unsigned long long _patchStart;
	unsigned long long _patchCount;
	void* _patchIndexBufferVirtualAddress;
	unsigned long long _patchIndexBufferOffset;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long numberOfPatchControlPoints;              //@synthesize numberOfPatchControlPoints=_numberOfPatchControlPoints - In the implementation block
@property (assign,nonatomic) unsigned long long patchStart;                              //@synthesize patchStart=_patchStart - In the implementation block
@property (assign,nonatomic) unsigned long long patchCount;                              //@synthesize patchCount=_patchCount - In the implementation block
@property (assign,nonatomic) void* patchIndexBufferVirtualAddress;                       //@synthesize patchIndexBufferVirtualAddress=_patchIndexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long patchIndexBufferOffset;                  //@synthesize patchIndexBufferOffset=_patchIndexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                           //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;                            //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)instanceCount;
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPatchControlPoints;
-(void)setNumberOfPatchControlPoints:(unsigned long long)arg1 ;
-(unsigned long long)patchStart;
-(void)setPatchStart:(unsigned long long)arg1 ;
-(unsigned long long)patchCount;
-(void)setPatchCount:(unsigned long long)arg1 ;
-(void*)patchIndexBufferVirtualAddress;
-(void)setPatchIndexBufferVirtualAddress:(void*)arg1 ;
-(unsigned long long)patchIndexBufferOffset;
-(void)setPatchIndexBufferOffset:(unsigned long long)arg1 ;
-(void)setInstanceCount:(unsigned long long)arg1 ;
@end


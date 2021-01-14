/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSState : NSObject {

	MPSStateResource* _resources;
	unsigned long long _resourceCount;
	unsigned long long _readCount;
	NSString* _label;
	unsigned short _flags;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long resourceCount;              //@synthesize resourceCount=_resourceCount - In the implementation block
@property (assign,nonatomic) unsigned long long readCount;                    //@synthesize readCount=_readCount - In the implementation block
@property (nonatomic,readonly) BOOL isTemporary; 
@property (copy) NSString * label; 
@property (nonatomic,retain,readonly) id<MTLResource> resource; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(BOOL)isTemporary;
-(unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)resourceSize;
-(unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1 ;
-(MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(BOOL)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id<MTLResource>)resource;
-(unsigned long long)resourceCount;
-(id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)initWithResource:(id)arg1 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 ;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(unsigned long long)readCount;
-(NSString *)label;
-(void)dealloc;
@end


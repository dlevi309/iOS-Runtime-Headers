/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(id)initWithResource:(id)arg1 ;
-(id<MTLResource>)resource;
-(BOOL)isTemporary;
-(unsigned long long)resourceSize;
-(id)initWithResources:(id)arg1 ;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 ;
-(unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(BOOL)arg2 ;
-(unsigned long long)resourceCount;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsPipelineLibrary.h>

@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary {

	NSString* _filePath;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(NSString *)filePath;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)setFilePath:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsPipelineLibrary.h>

@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary {

	NSString* _filePath;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(void)dealloc;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3 ;
@end


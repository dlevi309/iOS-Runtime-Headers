/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSArray;


@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@required
-(id)formattedDescription:(unsigned long long)arg1;
-(NSArray *)keys;
-(unsigned long long)options;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2;
-(id)getBinaryDataForKey:(id)arg1;

@end


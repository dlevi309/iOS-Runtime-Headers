/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLBinaryArchiveSPI.h>

@class NSArray, NSString;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSArray *)keys;
-(unsigned long long)options;
-(id<MTLDevice>)device;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2 ;
-(id)getBinaryDataForKey:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end


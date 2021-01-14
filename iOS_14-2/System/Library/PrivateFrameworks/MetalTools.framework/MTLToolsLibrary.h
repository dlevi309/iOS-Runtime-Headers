/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@class NSString, NSArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>

@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@property (readonly) long long type; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id<MTLDevice>)device;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(id)newExternFunctionWithName:(id)arg1 ;
-(NSString *)overrideTriple;
-(NSArray *)externFunctionNames;
-(NSString *)installName;
-(long long)type;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)functionNames;
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)label;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString, NSArray;


@protocol MTLLibrarySPI <MTLLibrary>
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@required
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setOverrideTriple:(id)arg1;
-(id)newExternFunctionWithName:(id)arg1;
-(NSString *)overrideTriple;
-(NSArray *)externFunctionNames;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;

@end


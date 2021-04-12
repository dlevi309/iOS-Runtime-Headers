/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString, NSArray;


@protocol MTLLibrarySPI <MTLLibrary>
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@required
-(NSArray *)externFunctionNames;
-(id)newExternFunctionWithName:(id)arg1;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(id)arg1;

@end


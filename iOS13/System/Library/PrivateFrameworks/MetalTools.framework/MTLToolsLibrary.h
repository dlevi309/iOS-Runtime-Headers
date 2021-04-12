/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@class NSString, NSArray, MTLToolsPointerArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI> {

	MTLToolsPointerArray* _functions;

}

@property (nonatomic,readonly) MTLToolsPointerArray * functions;              //@synthesize functions=_functions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)newFunctionWithName:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(NSString *)label;
-(NSArray *)externFunctionNames;
-(id)newExternFunctionWithName:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(NSArray *)functionNames;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)functions;
@end


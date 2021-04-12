/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLPipeline.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class MLUpdateProgressHandlers, NSObject, NSString;

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable> {

	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _updatableModelIndicies;

}

@property (readonly) vector<unsigned long long updatableModelIndicies;              //@synthesize updatableModelIndicies=_updatableModelIndicies - In the implementation block
@property (retain) MLUpdateProgressHandlers * progressHandlers;                     //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;                      //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)updateModelWithData:(id)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(void)resumeUpdate;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(id)initFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(vector<unsigned long long)updatableModelIndicies;
@end


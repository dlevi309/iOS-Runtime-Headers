/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLClassifier.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@class NSArray, NSString;

@interface MLTreeEnsembleClassifier : MLClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {

	shared_ptr<Archiver::MMappedFile>* _mmapped_model;
	vector<unsigned char, std::__1::allocator<unsigned char> > _cached_model;
	unsigned long long num_dimensions;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _classes_by_string;
	vector<long long, std::__1::allocator<long long> >* _classes_by_int64_t;
	long long _class_type;
	NSArray* _class_values;
	NSString* _single_array_key;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_convertStringClassVector:(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 int64ClassVector:(const vector<long long, std::__1::allocator<long long> >*)arg2 dimensions:(unsigned long long)arg3 toClassLabel:(id*)arg4 classType:(long long*)arg5 andReturnError:(id*)arg6 ;
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(const char*)_model_data;
-(void)_setSingleArrayLookupField;
-(id)_buildClassificationClasses:(double*)arg1 topk:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end


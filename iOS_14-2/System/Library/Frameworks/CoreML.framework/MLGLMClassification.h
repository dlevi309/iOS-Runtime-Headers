/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLClassifier.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSMutableArray, NSString;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader> {

	vector<double, std::__1::allocator<double> >* intercept;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* weights;
	NSMutableArray* classLabels;
	long long classType;
	int postEvalTransForm;
	int classEncoding;
	shared_ptr<CoreML::Specification::Model>* m_spec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 topK:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)calculateClassProbability:(double*)arg1 input:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)classify:(id)arg1 error:(id*)arg2 ;
@end


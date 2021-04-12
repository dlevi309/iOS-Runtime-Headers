/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLRegressor.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString;

@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader> {

	vector<double, std::__1::allocator<double> >* intercept;
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >* weights;
	int postEvalTransForm;
	shared_ptr<CoreML::Specification::Model>* m_spec;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithLRSpec:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
@end


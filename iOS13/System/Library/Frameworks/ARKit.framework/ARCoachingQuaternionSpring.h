/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class NSArray;

@interface ARCoachingQuaternionSpring : NSObject {

	NSArray* _springs;
	double _response;
	double _dampingRatio;

}

@property (nonatomic,readonly) NSArray * springs; 
@property (assign,nonatomic) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > value; 
@property (assign,nonatomic) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > target; 
@property (assign,nonatomic) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > velocity; 
@property (assign,nonatomic) double response; 
@property (assign,nonatomic) double dampingRatio; 
-(id)init;
-(void)setTarget:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg1 ;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)target;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)value;
-(void)setValue:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg1 ;
-(double)response;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)velocity;
-(void)setVelocity:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg1 ;
-(void)setResponse:(double)arg1 ;
-(double)dampingRatio;
-(NSArray *)springs;
-(void)setDampingRatio:(double)arg1 ;
-(void)stepWithDeltaTime:(double)arg1 ;
@end


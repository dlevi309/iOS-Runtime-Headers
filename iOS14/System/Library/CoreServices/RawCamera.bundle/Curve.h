/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/


@interface Curve : NSObject {

	/*^block*/id _function;
	/*^block*/id _inverse;
	double _domainMin;
	double _domainMax;
	double _rangeMin;
	double _rangeMax;

}

@property (copy) id function;                       //@synthesize function=_function - In the implementation block
@property (copy) id inverse;                        //@synthesize inverse=_inverse - In the implementation block
@property (readonly) double domainMin;              //@synthesize domainMin=_domainMin - In the implementation block
@property (readonly) double domainMax;              //@synthesize domainMax=_domainMax - In the implementation block
@property (readonly) double rangeMin;               //@synthesize rangeMin=_rangeMin - In the implementation block
@property (readonly) double rangeMax;               //@synthesize rangeMax=_rangeMax - In the implementation block
+(id)curve;
+(id)curveWithGamma:(double)arg1 ;
+(id)curveWithInverseOf:(id)arg1 ;
+(id)curveWith:(id)arg1 of:(id)arg2 ;
+(id)curveWithBlock:(/*^block*/id)arg1 andInverse:(/*^block*/id)arg2 ;
+(id)curveWithBlock:(/*^block*/id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
+(id)curveWithCount:(int)arg1 domainMin:(double)arg2 domainMax:(double)arg3 values:(double*)arg4 ;
-(id)init;
-(id)function;
-(double)rangeMin;
-(double)rangeMax;
-(id)inverse;
-(void)setFunction:(id)arg1 ;
-(id)initWithCount:(int)arg1 domainMin:(double)arg2 domainMax:(double)arg3 values:(double*)arg4 ;
-(id)initWithBlock:(/*^block*/id)arg1 domainMin:(double)arg2 domainMax:(double)arg3 ;
-(void)setInverse:(id)arg1 ;
-(id)initWithGamma:(double)arg1 ;
-(id)initWithInverseOf:(id)arg1 ;
-(double)domainMin;
-(double)domainMax;
-(id)initWith:(id)arg1 of:(id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 andInverse:(/*^block*/id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface JDErrorSimulation : NSObject {

	unique_ptr<JasperErrorSimulation, std::__1::default_delete<JasperErrorSimulation> >* _sim;

}
-(id)initWithConstErrorMean:(double)arg1 constErrorStd:(double)arg2 framePercentageErrorStd:(double)arg3 ;
-(double*)constErrorForSpot:(int)arg1 echo:(int)arg2 inBank:(int)arg3 ;
-(void)injectErrorsToPointCloud:(id)arg1 ;
@end


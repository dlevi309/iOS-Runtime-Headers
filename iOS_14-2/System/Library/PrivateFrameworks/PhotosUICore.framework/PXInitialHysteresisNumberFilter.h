/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter {

	BOOL _didReachThreshold;
	double _offset;
	double _hysteresis;

}

@property (assign,nonatomic) double hysteresis;                      //@synthesize hysteresis=_hysteresis - In the implementation block
@property (nonatomic,readonly) double outputDerivative; 
-(double)hysteresis;
-(double)outputDerivative;
-(void)setHysteresis:(double)arg1 ;
-(double)updatedOutput;
@end


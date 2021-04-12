/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNumberFilter.h>

@interface PXChangeDirectionNumberFilter : PXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(void)setMinimumChange:(double)arg1 ;
-(double)minimumChange;
-(id)initWithInput:(double)arg1 ;
-(double)initialOutputForInput:(double)arg1 ;
-(double)updatedOutput;
@end


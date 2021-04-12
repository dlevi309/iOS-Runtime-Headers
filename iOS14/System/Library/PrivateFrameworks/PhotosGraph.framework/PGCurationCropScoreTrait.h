/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationCropScoreTrait : PGCurationTrait {

	double _minimumSquareCropScore;

}

@property (assign,nonatomic) double minimumSquareCropScore;              //@synthesize minimumSquareCropScore=_minimumSquareCropScore - In the implementation block
-(BOOL)isActive;
-(id)initWithMinimumSquareCropScore:(double)arg1 ;
-(double)minimumSquareCropScore;
-(void)setMinimumSquareCropScore:(double)arg1 ;
@end


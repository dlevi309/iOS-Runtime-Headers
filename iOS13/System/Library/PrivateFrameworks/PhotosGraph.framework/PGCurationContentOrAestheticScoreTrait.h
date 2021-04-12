/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait {

	double _minimumAestheticScore;

}

@property (assign,nonatomic) double minimumAestheticScore;              //@synthesize minimumAestheticScore=_minimumAestheticScore - In the implementation block
-(BOOL)isActive;
-(id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2 ;
-(double)minimumAestheticScore;
-(void)setMinimumAestheticScore:(double)arg1 ;
@end


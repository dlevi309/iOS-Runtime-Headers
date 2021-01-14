/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


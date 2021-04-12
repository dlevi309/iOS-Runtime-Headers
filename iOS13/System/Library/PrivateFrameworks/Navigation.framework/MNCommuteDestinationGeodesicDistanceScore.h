/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	NSMutableArray* _geodesicDistances;
	double _slope;

}

@property (nonatomic,retain) NSMutableArray * geodesicDistances;              //@synthesize geodesicDistances=_geodesicDistances - In the implementation block
@property (assign,nonatomic) double slope;                                    //@synthesize slope=_slope - In the implementation block
+(double)weight;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(double)slope;
-(void)setSlope:(double)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_updateScoreAndDestinationInvalid;
-(NSMutableArray *)geodesicDistances;
-(void)setGeodesicDistances:(NSMutableArray *)arg1 ;
@end


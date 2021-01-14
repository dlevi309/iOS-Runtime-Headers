/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationHistoryScore.h>

@protocol MNCommuteDestinationLocationHistoryScore
@required
-(void)updateLocationHistory:(id)arg1;

@end


@class NSArray;

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore> {

	int _score;
	BOOL _destinationInvalid;
	NSArray* _locationHistory;
	double _scoredDistance;
	double _scoredTimeInterval;

}

@property (nonatomic,copy) NSArray * locationHistory;                //@synthesize locationHistory=_locationHistory - In the implementation block
@property (assign,nonatomic) double scoredDistance;                  //@synthesize scoredDistance=_scoredDistance - In the implementation block
@property (assign,nonatomic) double scoredTimeInterval;              //@synthesize scoredTimeInterval=_scoredTimeInterval - In the implementation block
+(double)weight;
-(int)score;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)updateLocationHistory:(id)arg1 ;
-(double)scoredDistance;
-(double)scoredTimeInterval;
-(void)setLocationHistory:(NSArray *)arg1 ;
-(void)setScoredDistance:(double)arg1 ;
-(void)setScoredTimeInterval:(double)arg1 ;
-(NSArray *)locationHistory;
-(int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2 ;
@end


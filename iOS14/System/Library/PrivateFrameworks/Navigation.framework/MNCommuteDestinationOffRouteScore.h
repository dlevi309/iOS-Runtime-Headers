/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	BOOL _destinationInvalid;
	NSMutableArray* _offRouteEntries;

}

@property (nonatomic,retain) NSMutableArray * offRouteEntries;              //@synthesize offRouteEntries=_offRouteEntries - In the implementation block
+(double)weight;
-(id)initWithDestination:(id)arg1 ;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_updateScoreAndDestinationInvalid;
-(void)updateForRerouteWithLocation:(id)arg1 ;
-(NSMutableArray *)offRouteEntries;
-(void)setOffRouteEntries:(NSMutableArray *)arg1 ;
@end


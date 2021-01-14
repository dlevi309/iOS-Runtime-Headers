/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNCommuteDestinationScore.h>

@interface MNCommuteDestinationMapsSuggestionsScore : MNCommuteDestinationScore
+(double)weight;
-(int)score;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
@end


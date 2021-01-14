/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARCoachingState.h>

@class ARCoachingState, ARCoachingHeuristicCollection;

@interface ARCoachingStateRelocalizing : ARCoachingState {

	ARCoachingState* _nextState;
	ARCoachingHeuristicCollection* _heuristics;

}
-(long long)requirements;
-(void)enter;
-(id)initWithView:(id)arg1 ;
-(id)doAction:(long long)arg1 ;
@end


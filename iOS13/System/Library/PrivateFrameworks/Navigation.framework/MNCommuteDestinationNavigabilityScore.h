/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationObserver.h>

@class NSString;

@interface MNCommuteDestinationNavigabilityScore : MNCommuteDestinationScore <MNCommuteDestinationObserver> {

	BOOL _destinationInvalid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)weight;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_checkDestinationRoute:(id)arg1 ;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2 ;
@end


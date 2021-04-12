/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


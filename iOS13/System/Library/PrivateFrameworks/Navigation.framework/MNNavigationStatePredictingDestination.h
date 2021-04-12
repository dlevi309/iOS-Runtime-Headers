/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNNavigationState.h>
#import <libobjc.A.dylib/MNCommuteSessionObserver.h>

@class MNCommuteSession, NSString;

@interface MNNavigationStatePredictingDestination : MNNavigationState <MNCommuteSessionObserver> {

	MNCommuteSession* _commuteSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(void)enterState;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)stopPredictingDestinations;
-(id)traceManager;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
@end


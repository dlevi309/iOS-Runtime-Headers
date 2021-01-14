/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)desiredLocationProviderType;
-(void)enterState;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)stopPredictingDestinations;
-(unsigned long long)type;
-(void)commuteSessionDidArrive:(id)arg1 ;
-(id)traceManager;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(id)clParameters;
@end


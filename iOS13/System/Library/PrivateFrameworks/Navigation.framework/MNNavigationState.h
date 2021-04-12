/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNNavigationStateManager, MNNavigationTraceManager;

@interface MNNavigationState : NSObject {

	double _locationUpdateInterval;
	double _suggestionUpdateFrequency;
	MNNavigationStateManager* _stateManager;

}

@property (nonatomic,__weak,readonly) MNNavigationStateManager * stateManager;              //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL requiresHighMemoryThreshold; 
@property (nonatomic,readonly) unsigned long long desiredLocationProviderType; 
@property (nonatomic,readonly) BOOL requiresLocationAccess; 
@property (nonatomic,readonly) BOOL shouldClearStoredRoutes; 
@property (nonatomic,readonly) double locationUpdateInterval;                               //@synthesize locationUpdateInterval=_locationUpdateInterval - In the implementation block
@property (nonatomic,readonly) double suggestionUpdateFrequency;                            //@synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager; 
-(id)init;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned long long)type;
-(void)enterState;
-(MNNavigationStateManager *)stateManager;
-(MNNavigationTraceManager *)traceManager;
-(id)initWithStateManager:(id)arg1 ;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(BOOL)shouldClearStoredRoutes;
-(void)preEnterState;
-(BOOL)requiresLocationAccess;
-(BOOL)_isSelectorValidForForwarding:(SEL)arg1 ;
-(double)locationUpdateInterval;
-(double)suggestionUpdateFrequency;
@end


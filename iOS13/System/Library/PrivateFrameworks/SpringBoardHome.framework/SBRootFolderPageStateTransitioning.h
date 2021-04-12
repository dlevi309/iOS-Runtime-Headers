/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBRootFolderPageStateTransitioning <SBRootFolderPageStateProviding>
@property (getter=isTransitioningPageState,nonatomic,readonly) BOOL transitioningPageState; 
@property (nonatomic,readonly) long long destinationPageState; 
@required
-(long long)destinationPageState;
-(BOOL)isTransitioningPageState;
-(void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)canTransitionPageStateToState:(long long)arg1;
-(id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKViewController.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@class UIActivityIndicatorView, NSArray, GKLoadableContentStateMachine, NSString;

@interface GKLoadableContentViewController : GKViewController <_GKStateMachineDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	NSArray* _viewsToHideWhileLoading;
	double _loadingIndicatorDelay;
	GKLoadableContentStateMachine* _loadingMachine;

}

@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSArray * viewsToHideWhileLoading;                           //@synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading - In the implementation block
@property (assign,nonatomic) double loadingIndicatorDelay;                                //@synthesize loadingIndicatorDelay=_loadingIndicatorDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(id)init;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingIndicatorDelay:(double)arg1 ;
-(GKLoadableContentStateMachine *)loadingMachine;
-(NSArray *)viewsToHideWhileLoading;
-(void)setViewsToHideWhileLoading:(NSArray *)arg1 ;
-(void)didEnterLoadedState;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didExitLoadedState;
-(double)loadingIndicatorDelay;
-(void)setLoadingMachine:(GKLoadableContentStateMachine *)arg1 ;
-(void)dealloc;
-(NSString *)loadingState;
-(void)setLoadingState:(NSString *)arg1 ;
@end


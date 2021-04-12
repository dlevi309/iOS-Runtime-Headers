/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@protocol SPUISearchBarDelegate;
@class SPUISpotlightSearchBarView;

@interface SPUISearchBarController : SPUISpotlightRemoteViewController {

	BOOL _roundedCornerVisible;
	id<SPUISearchBarDelegate> _delegate;
	double _heightOfBar;

}

@property (retain) SPUISpotlightSearchBarView * view; 
@property (assign) double heightOfBar;                                               //@synthesize heightOfBar=_heightOfBar - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL roundedCornerVisible;                              //@synthesize roundedCornerVisible=_roundedCornerVisible - In the implementation block
+(id)todayViewSearchBar;
+(id)notificationCenterSearchBar;
-(id<SPUISearchBarDelegate>)delegate;
-(void)setDelegate:(id<SPUISearchBarDelegate>)arg1 ;
-(void)loadView;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)backgroundBlurView;
-(void)setBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)roundedCornerVisible;
-(void)setRoundedCornerVisible:(BOOL)arg1 ;
-(void)updateSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)didInvalidateSceneWhenForeground;
-(id)sceneSpecification;
-(CGSize)initialFittingSize;
-(BOOL)setSceneFrameOnRotation;
-(double)heightOfBar;
-(void)setHeightOfBar:(double)arg1 ;
@end


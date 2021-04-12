/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@protocol SPUISearchBarDelegate;
@class NSLayoutConstraint, _UINavigationBarTitleView;

@interface SPUISearchBarController : SPUISpotlightRemoteViewController {

	BOOL _roundedCornerVisible;
	id<SPUISearchBarDelegate> _delegate;
	NSLayoutConstraint* _heightAnchor;

}

@property (retain) _UINavigationBarTitleView * view; 
@property (retain) NSLayoutConstraint * heightAnchor;                                //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL roundedCornerVisible;                              //@synthesize roundedCornerVisible=_roundedCornerVisible - In the implementation block
+(id)notificationCenterSearchBar;
+(id)todayViewSearchBar;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)setRoundedCornerVisible:(BOOL)arg1 ;
-(id<SPUISearchBarDelegate>)delegate;
-(BOOL)setSceneFrameOnRotation;
-(BOOL)roundedCornerVisible;
-(void)setDelegate:(id<SPUISearchBarDelegate>)arg1 ;
-(void)didInvalidateSceneWhenForeground;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(CGSize)initialFittingSize;
-(id)backgroundBlurView;
-(NSLayoutConstraint *)heightAnchor;
-(id)sceneSpecification;
-(void)loadView;
-(void)updateSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setBlurProgress:(double)arg1 animated:(BOOL)arg2 ;
@end


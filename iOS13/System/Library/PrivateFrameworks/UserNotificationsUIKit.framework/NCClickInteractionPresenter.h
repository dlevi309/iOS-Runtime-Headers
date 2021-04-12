/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UIClickInteractionDelegate.h>

@protocol NCClickInteractionPresenterDelegate;
@class UIView, NSString, _UIClickInteraction, NCTouchEaterGestureRecognizer, NCClickInteractionPresentedControl, MTMaterialView;

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate> {

	BOOL _presented;
	BOOL _hinting;
	UIView* _sourceView;
	NSString* _groupName;
	long long _materialRecipe;
	id<NCClickInteractionPresenterDelegate> _delegate;
	long long _overrideUserInterfaceStyle;
	_UIClickInteraction* _clickInteraction;
	UIView* _containerView;
	UIView* _portalView;
	NCTouchEaterGestureRecognizer* _touchEater;
	NCClickInteractionPresentedControl* _presentedControl;
	MTMaterialView* _backgroundMaterialView;
	CGRect _sourceViewVisibleRect;

}

@property (getter=_clickInteraction,nonatomic,readonly) _UIClickInteraction * clickInteraction;                             //@synthesize clickInteraction=_clickInteraction - In the implementation block
@property (getter=_containerView,nonatomic,readonly) UIView * containerView;                                                //@synthesize containerView=_containerView - In the implementation block
@property (getter=_portalView,nonatomic,readonly) UIView * portalView;                                                      //@synthesize portalView=_portalView - In the implementation block
@property (getter=_touchEater,nonatomic,__weak,readonly) NCTouchEaterGestureRecognizer * touchEater;                        //@synthesize touchEater=_touchEater - In the implementation block
@property (getter=_presentedControl,nonatomic,readonly) NCClickInteractionPresentedControl * presentedControl;              //@synthesize presentedControl=_presentedControl - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView;                      //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (assign,setter=_setHinting:,getter=_isHinting,nonatomic) BOOL hinting;                                            //@synthesize hinting=_hinting - In the implementation block
@property (assign,setter=_setPresented:,getter=isPresented,nonatomic) BOOL presented;                                       //@synthesize presented=_presented - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,__weak,readonly) UIView * sourceView;                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceViewVisibleRect;                                                                  //@synthesize sourceViewVisibleRect=_sourceViewVisibleRect - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                            //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) long long materialRecipe;                                                                    //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (assign,nonatomic,__weak) id<NCClickInteractionPresenterDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long overrideUserInterfaceStyle;                                                          //@synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NCClickInteractionPresenterDelegate>)delegate;
-(void)setDelegate:(id<NCClickInteractionPresenterDelegate>)arg1 ;
-(NSString *)title;
-(id)_containerView;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)_tearDown;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIView *)sourceView;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_setPresented:(BOOL)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(void)setOverrideUserInterfaceStyle:(long long)arg1 ;
-(id)_portalView;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(id)highlightEffectForClickInteraction:(id)arg1 ;
-(void)clickInteractionDidEnd:(id)arg1 ;
-(id)_clickInteraction;
-(void)_performPresentation;
-(id)_backgroundMaterialView;
-(BOOL)isPresented;
-(void)_performCancel;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(long long)materialRecipe;
-(void)_setHinting:(BOOL)arg1 ;
-(void)_handleEatenTouch:(id)arg1 ;
-(id)_touchEater;
-(BOOL)dismissModalFullScreenIfNeeded;
-(id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3 ;
-(void)setSourceViewVisibleRect:(CGRect)arg1 ;
-(void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1 ;
-(void)_setUpSubviews;
-(CGRect)sourceViewVisibleRect;
-(void)_configureContainerViewIfNecessary;
-(void)_configurePortalViewIfNecessary;
-(CGRect)_initialPresentedViewFrame;
-(void)_setUpContainerView;
-(void)_setUpPortalView;
-(void)_setUpBackgroundMaterialView;
-(void)_setUpPresentedControl;
-(double)_tensionForTransitionPresentation:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(CGRect)_finalPresentedViewFrame;
-(double)_frictionForTransitionPresentation:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(id)_presentedControl;
-(void)_animatePresentation:(BOOL)arg1 cancelled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isHinting;
@end


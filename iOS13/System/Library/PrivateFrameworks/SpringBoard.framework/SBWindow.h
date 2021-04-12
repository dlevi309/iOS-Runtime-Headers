/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFWindow.h>
#import <libobjc.A.dylib/SBMainDisplayInterfaceOrientationSource.h>
#import <libobjc.A.dylib/SBRecycledViewsContainerProviding.h>
#import <libobjc.A.dylib/SBWindowLayoutStrategyObserving.h>

@protocol SBWindowLayoutStrategy;
@class NSString, UIView, SBUICoronaAnimationController, SBRecycledViewsContainer, NSMutableSet;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving> {

	SBUICoronaAnimationController* _coronaAnimationController;
	SBRecycledViewsContainer* _recycledViewsContainerView;
	BOOL _requestedHiddenValue;
	NSMutableSet* _additionalHiddenReasons;
	id<SBWindowLayoutStrategy> _layoutStrategy;

}

@property (nonatomic,readonly) id<SBWindowLayoutStrategy> layoutStrategy;                 //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double orientationSourceLevel; 
@property (nonatomic,copy,readonly) NSString * orientationSourceDescription; 
@property (nonatomic,readonly) UIView * recycledViewsContainer; 
+(id)defaultLayoutStrategy;
+(BOOL)sb_autorotates;
+(BOOL)sb_disableStatusBarHeightChanges;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void)makeKeyAndVisible;
-(long long)activeInterfaceOrientation;
-(void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2 ;
-(BOOL)_shouldResizeWithScene;
-(UIView *)recycledViewsContainer;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(id)sb_coronaAnimationController;
-(id<SBWindowLayoutStrategy>)layoutStrategy;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3 ;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
-(double)orientationSourceLevel;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)layoutStrategyFrameOnScreenDidChange:(id)arg1 ;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 ;
-(void)_willEnableSecureRendering:(id)arg1 ;
-(void)_didDisableSecureRendering:(id)arg1 ;
-(void)_updateHidingForSecureRendering:(BOOL)arg1 ;
-(void)_updateRealIsHidden;
-(void)_addHiddenReason:(id)arg1 ;
-(void)_removeHiddenReason:(id)arg1 ;
-(NSString *)orientationSourceDescription;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1 ;
@end


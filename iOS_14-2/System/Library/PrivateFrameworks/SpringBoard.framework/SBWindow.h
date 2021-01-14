/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long activeInterfaceOrientation; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double orientationSourceLevel; 
@property (nonatomic,copy,readonly) NSString * orientationSourceDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * recycledViewsContainer; 
+(BOOL)sb_autorotates;
+(id)defaultLayoutStrategy;
+(BOOL)sb_disableStatusBarHeightChanges;
-(BOOL)_shouldResizeWithScene;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(id<SBWindowLayoutStrategy>)layoutStrategy;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)activeInterfaceOrientation;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2 ;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(NSString *)description;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5 ;
-(void)makeKeyAndVisible;
-(UIView *)recycledViewsContainer;
-(id)sb_coronaAnimationController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3 ;
-(double)orientationSourceLevel;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 ;
-(void)_willEnableSecureRendering:(id)arg1 ;
-(void)_didDisableSecureRendering:(id)arg1 ;
-(void)_updateHidingForSecureRendering:(BOOL)arg1 ;
-(void)_updateRealIsHidden;
-(void)_addHiddenReason:(id)arg1 ;
-(void)_removeHiddenReason:(id)arg1 ;
-(NSString *)orientationSourceDescription;
-(void)layoutStrategyFrameOnScreenDidChange:(id)arg1 ;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1 ;
@end


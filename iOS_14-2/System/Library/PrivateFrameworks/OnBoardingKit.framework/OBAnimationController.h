/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <libobjc.A.dylib/OBAnimationAppearanceChangeDelegate.h>

@class CAPackage, CAStateController, OBAnimationView, NSArray, OBAnimationState, NSString;

@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate> {

	BOOL _canceled;
	CAPackage* _package;
	CAStateController* _stateController;
	OBAnimationView* _animationView;
	NSArray* _animatedStates;
	unsigned long long _stateIndex;
	OBAnimationState* _firstState;

}

@property (nonatomic,retain) CAPackage * package;                              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) OBAnimationView * animationView;                  //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) NSArray * animatedStates;                         //@synthesize animatedStates=_animatedStates - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) unsigned long long stateIndex;                    //@synthesize stateIndex=_stateIndex - In the implementation block
@property (nonatomic,retain) OBAnimationState * firstState;                    //@synthesize firstState=_firstState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)packageForURL:(id)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setPackage:(CAPackage *)arg1 ;
-(CAStateController *)stateController;
-(void)startAnimation;
-(BOOL)canceled;
-(void)stopAnimation;
-(CAPackage *)package;
-(void)setStateController:(CAStateController *)arg1 ;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 sizingTransformScale:(double)arg3 animatedStates:(id)arg4 startAtFirstState:(id)arg5 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(void)_initializeStartingStateForStopAnimation:(BOOL)arg1 ;
-(void)setStateIndex:(unsigned long long)arg1 ;
-(id)_caStateForAnimationState:(id)arg1 ;
-(void)_stepAnimationStatesForLayer:(id)arg1 ;
-(unsigned long long)stateIndex;
-(NSArray *)animatedStates;
-(OBAnimationView *)animationView;
-(OBAnimationState *)firstState;
-(void)updateAnimationForAppearanceChange;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4 ;
-(void)setAnimationView:(OBAnimationView *)arg1 ;
-(void)setAnimatedStates:(NSArray *)arg1 ;
-(void)setFirstState:(OBAnimationState *)arg1 ;
@end


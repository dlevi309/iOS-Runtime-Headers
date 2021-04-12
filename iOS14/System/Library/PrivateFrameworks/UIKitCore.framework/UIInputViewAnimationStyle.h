/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInputViewAnimationStyle : NSObject <NSCopying> {

	BOOL animated;
	double duration;
	unsigned long long extraOptions;
	BOOL interactivelyCancelled;
	BOOL _isLegacy;
	BOOL force;
	BOOL _dontMerge;

}

@property (assign,nonatomic) BOOL force; 
@property (assign,nonatomic) BOOL animated; 
@property (assign,nonatomic) BOOL dontMerge;                               //@synthesize dontMerge=_dontMerge - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) unsigned long long extraOptions; 
@property (assign,nonatomic) BOOL interactivelyCancelled; 
@property (nonatomic,readonly) BOOL isAnimationCompleted; 
@property (nonatomic,readonly) BOOL canDismissWithScrollView; 
+(id)animationStyleDefault;
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 ;
+(id)animationStyleImmediate;
-(void)setDontMerge:(BOOL)arg1 ;
-(BOOL)animated;
-(BOOL)interactivelyCancelled;
-(BOOL)isAnimationCompleted;
-(id)endPlacementForInputViewSet:(id)arg1 ;
-(BOOL)dontMerge;
-(BOOL)canDismissWithScrollView;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(void)setExtraOptions:(unsigned long long)arg1 ;
-(void)setInteractivelyCancelled:(BOOL)arg1 ;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
-(unsigned long long)extraOptions;
-(BOOL)force;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3 ;
-(void)setDuration:(double)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(id)legacyAnimationCopy;
-(void)setForce:(BOOL)arg1 ;
-(id)description;
-(id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)animationStyleImmediate;
+(id)animationStyleDefault;
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setExtraOptions:(unsigned long long)arg1 ;
-(unsigned long long)extraOptions;
-(void)setInteractivelyCancelled:(BOOL)arg1 ;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)isAnimationCompleted;
-(BOOL)canDismissWithScrollView;
-(BOOL)force;
-(id)endPlacementForInputViewSet:(id)arg1 ;
-(void)setForce:(BOOL)arg1 ;
-(BOOL)interactivelyCancelled;
-(id)legacyAnimationCopy;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
-(BOOL)dontMerge;
-(void)setDontMerge:(BOOL)arg1 ;
@end


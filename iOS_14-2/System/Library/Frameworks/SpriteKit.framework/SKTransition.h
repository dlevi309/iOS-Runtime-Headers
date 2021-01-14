/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKTransition : NSObject <NSCopying> {

	SKCTransitionNode* _skcTransitionNode;

}

@property (assign,nonatomic) BOOL pausesIncomingScene; 
@property (assign,nonatomic) BOOL pausesOutgoingScene; 
+(id)revealDownWithDuration:(double)arg1 ;
+(id)revealUpWithDuration:(double)arg1 ;
+(id)revealLeftWithDuration:(double)arg1 ;
+(id)revealRightWithDuration:(double)arg1 ;
+(id)moveInDownWithDuration:(double)arg1 ;
+(id)moveInUpWithDuration:(double)arg1 ;
+(id)moveInLeftWithDuration:(double)arg1 ;
+(id)moveInRightWithDuration:(double)arg1 ;
+(id)pushDownWithDuration:(double)arg1 ;
+(id)pushUpWithDuration:(double)arg1 ;
+(id)pushLeftWithDuration:(double)arg1 ;
+(id)pushRightWithDuration:(double)arg1 ;
+(id)revealWithDirection:(long long)arg1 duration:(double)arg2 ;
+(id)moveInWithDirection:(long long)arg1 duration:(double)arg2 ;
+(id)pushWithDirection:(long long)arg1 duration:(double)arg2 ;
+(id)fadeWithDuration:(double)arg1 ;
+(id)fadeWithColor:(id)arg1 duration:(double)arg2 ;
+(id)crossFadeWithDuration:(double)arg1 ;
+(id)flipHorizontalWithDuration:(double)arg1 ;
+(id)flipVerticalWithDuration:(double)arg1 ;
+(id)doorsOpenHorizontalWithDuration:(double)arg1 ;
+(id)doorsOpenVerticalWithDuration:(double)arg1 ;
+(id)doorsCloseHorizontalWithDuration:(double)arg1 ;
+(id)doorsCloseVerticalWithDuration:(double)arg1 ;
+(id)doorwayWithDuration:(double)arg1 ;
+(id)transitionWithCIFilter:(id)arg1 duration:(double)arg2 ;
-(id)init;
-(id)_filter;
-(double)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)pausesIncomingScene;
-(BOOL)pausesOutgoingScene;
-(SKCTransitionNode*)_backingNode;
-(void)setPausesIncomingScene:(BOOL)arg1 ;
-(void)setPausesOutgoingScene:(BOOL)arg1 ;
@end


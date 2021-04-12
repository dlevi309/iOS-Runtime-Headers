/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {

	SCNCAction* _caction;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long timingMode; 
@property (assign,nonatomic) id timingFunction; 
@property (assign,nonatomic) double speed; 
+(BOOL)supportsSecureCoding;
+(id)sequence:(id)arg1 ;
+(id)group:(id)arg1 ;
+(id)unhide;
+(id)fadeInWithDuration:(double)arg1 ;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)hide;
+(id)removeFromParentNode;
+(id)runBlock:(/*^block*/id)arg1 ;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
+(id)moveTo:(SCNVector3)arg1 duration:(double)arg2 ;
+(id)waitForDuration:(double)arg1 ;
+(id)customActionWithDuration:(double)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
+(id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2 ;
+(id)waitForDuration:(double)arg1 withRange:(double)arg2 ;
+(id)actionNamed:(id)arg1 ;
+(id)performSelector:(SEL)arg1 onTarget:(id)arg2 ;
+(id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 aroundAxis:(SCNVector3)arg2 duration:(double)arg3 ;
+(id)rotateToAxisAngle:(SCNVector4)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5 ;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
+(id)repeatAction:(id)arg1 count:(unsigned long long)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
+(id)fadeOpacityBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(double)arg1 duration:(double)arg2 ;
+(BOOL)editingModeEnabled;
+(void)setEditingModeEnabled:(BOOL)arg1 ;
+(id)moveBy:(SCNVector3)arg1 duration:(double)arg2 ;
+(id)runAction:(id)arg1 onChildNodeWithName:(id)arg2 ;
+(id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2 ;
-(id)parameters;
-(void)setSpeed:(double)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)finished;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(double)speed;
-(void)setTimingFunction:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRelative;
-(BOOL)isCustom;
-(id)timingFunction;
-(void)setFinished:(BOOL)arg1 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(SCNCAction*)caction;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(id)arg1 ;
-(void)dealloc;
-(void)setTimingMode:(long long)arg1 ;
-(void)setCppAction:(void*)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(double)durationRange;
-(void)setDurationRange:(double)arg1 ;
-(long long)timingMode;
-(void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willResumeWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2 ;
-(double)ratioForTime:(double)arg1 ;
-(void)wasAddedToTarget:(id)arg1 atTime:(double)arg2 ;
-(void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
@end


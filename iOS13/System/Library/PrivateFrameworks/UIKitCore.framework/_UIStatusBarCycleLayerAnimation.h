/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class CALayer, CAAnimation, NSString;

@interface _UIStatusBarCycleLayerAnimation : NSObject {

	CALayer* _layer;
	CAAnimation* _animation;
	CAAnimation* _originalAnimation;
	NSString* _key;

}

@property (nonatomic,retain) CALayer * layer;                              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;                      //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) CAAnimation * originalAnimation;              //@synthesize originalAnimation=_originalAnimation - In the implementation block
@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
+(id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3 ;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(CAAnimation *)animation;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setOriginalAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)originalAnimation;
@end


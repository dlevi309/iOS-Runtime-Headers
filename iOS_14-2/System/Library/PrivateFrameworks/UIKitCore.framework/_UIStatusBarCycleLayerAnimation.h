/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CALayer *)layer;
-(CAAnimation *)animation;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setOriginalAnimation:(CAAnimation *)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(id)description;
-(CAAnimation *)originalAnimation;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end


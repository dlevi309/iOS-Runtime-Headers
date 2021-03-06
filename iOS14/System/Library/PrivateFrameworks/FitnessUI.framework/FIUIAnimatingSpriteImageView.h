/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface FIUIAnimatingSpriteImageView : UIView {

	CALayer* _imageLayer;
	UIImage* _spriteImage;
	long long _spriteFrameCount;
	long long _spriteColumnCount;
	unsigned long long _framesPerSecond;

}

@property (nonatomic,retain) UIImage * spriteImage;                           //@synthesize spriteImage=_spriteImage - In the implementation block
@property (assign,nonatomic) long long spriteFrameCount;                      //@synthesize spriteFrameCount=_spriteFrameCount - In the implementation block
@property (assign,nonatomic) long long spriteColumnCount;                     //@synthesize spriteColumnCount=_spriteColumnCount - In the implementation block
@property (assign,nonatomic) unsigned long long framesPerSecond;              //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
+(unsigned long long)_findSpriteIndex:(CGPoint)arg1 centerPoints:(id)arg2 ;
+(id)_createNewSpriteArray:(id)arg1 currentFrame:(unsigned long long)arg2 arraySize:(unsigned long long)arg3 interrupted:(BOOL)arg4 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)framesPerSecond;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimating;
-(BOOL)isAnimating;
-(CGSize)_spriteFrameSize;
-(void)stopAnimatingFinishingCycle:(BOOL)arg1 ;
-(id)_centerPointValues;
-(void)setSpriteImage:(UIImage *)arg1 ;
-(void)animateOnce;
-(UIImage *)spriteImage;
-(long long)spriteFrameCount;
-(void)setSpriteFrameCount:(long long)arg1 ;
-(long long)spriteColumnCount;
-(void)setSpriteColumnCount:(long long)arg1 ;
-(void)setFramesPerSecond:(unsigned long long)arg1 ;
@end


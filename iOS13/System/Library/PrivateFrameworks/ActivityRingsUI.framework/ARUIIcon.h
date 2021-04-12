/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObject.h>

@class UIColor;

@interface ARUIIcon : ARUIAnimatableObject {

	float _alpha;
	double _size;
	UIColor* _color;
	double _coloration;
	long long _frameColumns;
	long long _frameCount;
	long long _currentFrameIndex;
	CGPoint _position;
	CGPoint _firstFrameOrigin;
	CGSize _frameSize;

}

@property (assign,nonatomic) CGPoint position;                         //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double coloration;                        //@synthesize coloration=_coloration - In the implementation block
@property (assign,nonatomic) float alpha;                              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) CGPoint firstFrameOrigin;                 //@synthesize firstFrameOrigin=_firstFrameOrigin - In the implementation block
@property (assign,nonatomic) CGSize frameSize;                         //@synthesize frameSize=_frameSize - In the implementation block
@property (assign,nonatomic) long long frameColumns;                   //@synthesize frameColumns=_frameColumns - In the implementation block
@property (assign,nonatomic) long long frameCount;                     //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) long long currentFrameIndex;              //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
-(id)init;
-(double)size;
-(CGPoint)position;
-(UIColor *)color;
-(float)alpha;
-(void)setSize:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isDrawable;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)setFrameCount:(long long)arg1 ;
-(long long)frameCount;
-(void)setFrameSize:(CGSize)arg1 ;
-(long long)currentFrameIndex;
-(void)setCurrentFrameIndex:(long long)arg1 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(double)coloration;
-(CGSize)frameSize;
-(long long)frameColumns;
-(CGPoint)firstFrameOrigin;
-(void)setFirstFrameOrigin:(CGPoint)arg1 ;
-(void)setFrameColumns:(long long)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(void)setColoration:(double)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPSwipableViewDelegate <NSObject>
@optional
-(void)swipableView:(id)arg1 willMoveToSuperview:(id)arg2;
-(void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
-(void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
-(id)swipableView:(id)arg1 overrideHitTest:(CGPoint)arg2 withEvent:(id)arg3;
-(void)swipableView:(id)arg1 swipedInDirection:(long long)arg2;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(CGPoint)arg3;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2;
-(void)swipableView:(id)arg1 pinchedToScale:(double)arg2 withVelocity:(double)arg3;
-(void)swipableViewHadActivity:(id)arg1;

@end


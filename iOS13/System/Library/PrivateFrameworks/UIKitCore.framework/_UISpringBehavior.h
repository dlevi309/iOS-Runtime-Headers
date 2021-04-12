/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UISpringBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _topLeft;
	UIAttachmentBehavior* _topRight;
	UIAttachmentBehavior* _bottomRight;
	UIAttachmentBehavior* _bottomLeft;
	double _damping;
	double _frequency;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) CGPoint anchorPoint;              //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) double damping;                   //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;                 //@synthesize frequency=_frequency - In the implementation block
-(id)init;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithItem:(id)arg1 anchorPoint:(CGPoint)arg2 ;
@end


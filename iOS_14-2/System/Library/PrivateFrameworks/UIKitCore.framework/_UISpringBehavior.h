/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(id)initWithItem:(id)arg1 anchorPoint:(CGPoint)arg2 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
@end


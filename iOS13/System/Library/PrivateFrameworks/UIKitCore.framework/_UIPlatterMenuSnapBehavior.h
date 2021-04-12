/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _spring1;
	UIAttachmentBehavior* _spring2;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) CGPoint anchorPoint; 
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
@end


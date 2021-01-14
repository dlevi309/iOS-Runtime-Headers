/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarImageView.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class CAShapeLayer, NSString;

@interface _UIStatusBarActivityIconView : _UIStatusBarImageView <_UIStatusBarPersistentAnimation> {

	BOOL _ringing;
	double _ringingIconScale;
	CAShapeLayer* _innerRingShapeLayer;
	CAShapeLayer* _outerRingShapeLayer;

}

@property (nonatomic,retain) CAShapeLayer * innerRingShapeLayer;              //@synthesize innerRingShapeLayer=_innerRingShapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerRingShapeLayer;              //@synthesize outerRingShapeLayer=_outerRingShapeLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyStyleAttributes:(id)arg1 ;
-(void)resumePersistentAnimation;
-(UIEdgeInsets)alignmentRectInsets;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_teardownRingingLayers;
-(void)setInnerRingShapeLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)_setupRingingLayersForStyleAttributes:(id)arg1 ;
-(CAShapeLayer *)innerRingShapeLayer;
-(void)setOuterRingShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setRinging:(BOOL)arg1 forUpdate:(id)arg2 ;
-(CAShapeLayer *)outerRingShapeLayer;
@end


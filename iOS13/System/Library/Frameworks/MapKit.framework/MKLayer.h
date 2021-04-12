/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer {

	CGRect _hitBounds;
	CGPoint _hitOffset;
	CGPoint _hitOutset;

}

@property (nonatomic,readonly) CGRect hitBounds;              //@synthesize hitBounds=_hitBounds - In the implementation block
@property (assign,nonatomic) CGPoint hitOffset;               //@synthesize hitOffset=_hitOffset - In the implementation block
@property (assign,nonatomic) CGPoint hitOutset;               //@synthesize hitOutset=_hitOutset - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setHitOffset:(CGPoint)arg1 ;
-(void)setHitOutset:(CGPoint)arg1 ;
-(CGRect)hitBounds;
-(CGPoint)hitOffset;
-(CGPoint)hitOutset;
@end


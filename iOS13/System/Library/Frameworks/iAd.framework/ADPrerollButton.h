/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ADPrerollButton : UIButton {

	UIEdgeInsets _hitRectInsets;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)dealloc;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(CGRect)hitRect;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)hitRect;
-(UIEdgeInsets)hitRectInsets;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end


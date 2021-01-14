/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTAttributeValueView.h>

@class UIView, NSArray;

@interface AVTColorWheelView : AVTAttributeValueView {

	UIView* _containerView;
	NSArray* _circleViews;

}

@property (nonatomic,retain) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * circleViews;               //@synthesize circleViews=_circleViews - In the implementation block
+(id)buildCircleViewWithDiameter:(double)arg1 ;
+(BOOL)colorItems:(id)arg1 containColorItem:(id)arg2 ;
+(id)colorItemsFrom:(id)arg1 excluding:(id)arg2 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(NSArray *)circleViews;
-(id)buildAllCircleViews;
-(void)setCircleViews:(NSArray *)arg1 ;
-(CGPoint)rotatePoint:(CGPoint)arg1 aroundCenter:(CGPoint)arg2 withAngle:(double)arg3 ;
-(void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 ;
@end


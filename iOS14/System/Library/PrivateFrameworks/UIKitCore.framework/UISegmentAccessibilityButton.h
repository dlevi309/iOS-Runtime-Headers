/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UISegment;

@interface UISegmentAccessibilityButton : UIButton {

	UISegment* _segment;

}

@property (nonatomic,retain) UISegment * segment;              //@synthesize segment=_segment - In the implementation block
+(id)buttonWithSegment:(id)arg1 ;
-(UISegment *)segment;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSegment:(UISegment *)arg1 ;
@end


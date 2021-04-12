/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSegment:(UISegment *)arg1 ;
-(UISegment *)segment;
@end


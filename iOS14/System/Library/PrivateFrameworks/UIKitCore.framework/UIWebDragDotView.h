/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIWebDragDotView : UIView {

	UIColor* m_selectionBarColor;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}
-(BOOL)isVertical;
-(void)setEdge:(CGRect)arg1 ;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPointedUp;
-(BOOL)isPointedDown;
-(BOOL)isPointedLeft;
-(BOOL)isPointedRight;
-(void)dealloc;
@end


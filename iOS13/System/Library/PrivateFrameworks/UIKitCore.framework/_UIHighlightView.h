/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray, NSMutableArray;

@interface _UIHighlightView : UIView {

	UIColor* _color;
	double _cornerRadius;
	CGRect _invertedHighlightClipRect;
	NSArray* _cornerRadii;
	NSMutableArray* _innerBounds;
	NSMutableArray* _innerQuads;
	BOOL _invertHighlight;

}
-(void)setColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setQuads:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setCornerRadii:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)cleanUp;
-(void)setFrames:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setInvertHighlight:(BOOL)arg1 clipRect:(CGRect)arg2 ;
@end


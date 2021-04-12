/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setFrames:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setInvertHighlight:(BOOL)arg1 clipRect:(CGRect)arg2 ;
-(void)setCornerRadii:(id)arg1 ;
-(void)cleanUp;
-(void)setCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setQuads:(id)arg1 boundaryRect:(CGRect)arg2 ;
@end


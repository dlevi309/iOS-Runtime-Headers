/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextRange;


@protocol NSTextViewportElement <NSObject>
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
@required
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2;
-(id)representedRangeAtPoint:(CGPoint)arg1;
-(NSTextRange *)representedRange;
-(CGSize)layoutSize;
-(CGPoint)layoutPoint;
-(void)setLayoutPoint:(CGPoint)arg1;

@end


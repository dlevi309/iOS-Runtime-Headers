/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextRange;


@protocol NSTextViewportElement <NSObject>
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
@required
-(CGSize)layoutSize;
-(CGPoint)layoutPoint;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2;
-(NSTextRange *)representedRange;
-(id)representedRangeAtPoint:(CGPoint)arg1;
-(void)setLayoutPoint:(CGPoint)arg1;
-(double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2;

@end


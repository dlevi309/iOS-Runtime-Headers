/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WKKeyboardScrollableInternal <NSObject>
@required
-(CGPoint*)contentOffset;
-(void)didFinishScrolling;
-(BOOL)isKeyboardScrollable;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
-(RectEdges<bool>*)rubberbandableDirections;
-(CGPoint*)boundedContentOffset:(CGPoint)arg1;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1;
-(CGSize*)interactiveScrollVelocity;
-(RectEdges<bool>*)scrollableDirectionsFromOffset:(CGPoint)arg1;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WKKeyboardScrollableInternal <NSObject>
@required
-(void)didFinishScrolling;
-(void)scrollWithScrollToExtentAnimationTo:(CGPoint)arg1;
-(void)scrollToContentOffset:(FloatPoint)arg1 animated:(BOOL)arg2;
-(BOOL)isKeyboardScrollable;
-(RectEdges<bool>*)rubberbandableDirections;
-(RectEdges<bool>*)scrollableDirectionsFromOffset:(CGPoint)arg1;
-(double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
-(CGPoint*)boundedContentOffset:(CGPoint)arg1;
-(CGPoint*)contentOffset;
-(CGSize*)interactiveScrollVelocity;

@end


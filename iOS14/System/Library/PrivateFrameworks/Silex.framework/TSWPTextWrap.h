/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol TSWPTextWrap
@required
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(BOOL*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPDFPageViewDelegate
@optional
-(void)resetZoom:(id)arg1;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)selectionWillTrack:(id)arg1;
-(void)doubleTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4;
-(void)selectionDidEndTracking:(id)arg1;
-(id)menuItems:(id)arg1 forPage:(id)arg2;
-(Class)classForAnnotationType:(const char*)arg1;
-(void)pageWasRendered:(id)arg1;

@end


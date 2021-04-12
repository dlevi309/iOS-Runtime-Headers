/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIPDFPageViewDelegate
@optional
-(void)resetZoom:(id)arg1;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4;
-(void)doubleTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)selectionWillTrack:(id)arg1;
-(void)selectionDidEndTracking:(id)arg1;
-(id)menuItems:(id)arg1 forPage:(id)arg2;
-(Class)classForAnnotationType:(const char*)arg1;
-(void)pageWasRendered:(id)arg1;

@end


/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@protocol AXDragSessionDelegate <NSObject>
@optional
-(void)dragSession:(id)arg1 movedToPoint:(CGPoint)arg2 byRequestor:(id)arg3;

@required
-(void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
-(void)dragSessionWasTerminated:(id)arg1;

@end


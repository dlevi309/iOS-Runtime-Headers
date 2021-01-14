/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@protocol AXDragSessionDelegate <NSObject>
@optional
-(void)dragSession:(id)arg1 movedToPoint:(CGPoint)arg2 byRequestor:(id)arg3;

@required
-(void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
-(void)dragSessionWasTerminated:(id)arg1;

@end


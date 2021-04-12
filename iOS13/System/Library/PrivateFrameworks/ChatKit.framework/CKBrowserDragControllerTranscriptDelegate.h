/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dragManagerDidBeginDragging:(id)arg1;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
-(void)dragManagerDidEndDragging:(id)arg1;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;

@end


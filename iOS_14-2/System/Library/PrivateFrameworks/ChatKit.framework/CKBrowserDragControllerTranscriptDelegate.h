/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>
@optional
-(id)dragManagerTargetView:(id)arg1;
-(void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dragManagerDidBeginDragging:(id)arg1;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
-(void)dragManagerDidEndDragging:(id)arg1;

@end


/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIWindowDraggingSource <NSObject>
@optional
-(CGPoint*)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
-(CGRect*)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
-(unsigned long long)draggingSourceWillBegin:(id)arg1;
-(void)draggingSourceDidBegin:(id)arg1;
-(BOOL)draggingSource:(id)arg1 willAddItem:(id)arg2;
-(void)draggingSource:(id)arg1 didAddItem:(id)arg2;
-(void)draggingSourceDidMove:(id)arg1;
-(void)draggingSource:(id)arg1 updateItem:(id)arg2;
-(void)draggingSourceDidEnd:(id)arg1 cancelled:(BOOL)arg2;

@end


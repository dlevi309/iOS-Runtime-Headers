/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


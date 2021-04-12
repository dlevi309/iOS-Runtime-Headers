/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIWindowDraggingDestination <NSObject>
@optional
-(CGRect*)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2;
-(unsigned long long)draggingDestinationUpdated:(id)arg1;
-(void)draggingDestinationExited:(id)arg1;
-(BOOL)prepareForDragOperation:(id)arg1;
-(BOOL)performDragOperation:(id)arg1;
-(void)concludeDragOperation:(id)arg1;
-(void)draggingDestinationWillEnd:(id)arg1 cancelled:(BOOL)arg2;
-(void)draggingDestinationEnded:(id)arg1 cancelled:(BOOL)arg2;

@required
-(unsigned long long)draggingDestinationEntered:(id)arg1;

@end


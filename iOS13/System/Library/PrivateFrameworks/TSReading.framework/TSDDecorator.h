/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDDecorator <NSObject>
@optional
-(void)screenScaleDidChange;
-(void)willBeginDynamicOperation;
-(void)didEndDynamicOperation;
-(void)willBeginScrollingOperation;
-(void)didEndScrollingOperation;
-(void)willBeginZoomingOperation;
-(void)didEndZoomingOperation;

@required
-(id)decoratorOverlayLayers;

@end


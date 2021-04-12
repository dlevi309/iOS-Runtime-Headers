/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(BOOL)isActive;
-(BOOL)isMinimized;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isAutomatic;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;

@end


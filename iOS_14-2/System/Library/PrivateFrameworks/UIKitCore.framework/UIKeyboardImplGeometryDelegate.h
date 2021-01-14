/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;
-(BOOL)isAutomatic;
-(BOOL)isActive;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isMinimized;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;

@end


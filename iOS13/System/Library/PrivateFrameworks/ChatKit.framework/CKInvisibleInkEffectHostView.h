/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class UIImage;


@protocol CKInvisibleInkEffectHostView
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@required
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(UIImage *)imageForInvisibleInkEffectView;

@end


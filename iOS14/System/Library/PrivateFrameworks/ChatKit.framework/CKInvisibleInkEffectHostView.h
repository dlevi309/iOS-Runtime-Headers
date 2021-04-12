/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class UIImage;


@protocol CKInvisibleInkEffectHostView
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@required
-(void)invisibleInkEffectViewWasSuspended;
-(UIImage *)imageForInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasResumed;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;

@end


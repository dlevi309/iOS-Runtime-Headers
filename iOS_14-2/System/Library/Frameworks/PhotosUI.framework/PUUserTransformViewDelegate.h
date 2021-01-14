/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUUserTransformViewDelegate <NSObject>
@optional
-(BOOL)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(CGPoint)arg2;
-(void)userTransformView:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2;

@required
-(void)userTransformView:(id)arg1 didChangeUserAffineTransform:(CGAffineTransform)arg2 isUserInteracting:(BOOL)arg3;

@end


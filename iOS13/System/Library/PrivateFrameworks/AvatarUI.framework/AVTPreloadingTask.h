/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTPreloadingTask <AVTCancelable>
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler; 
@required
-(void)setCanceled:(BOOL)arg1;
-(id)completionHandler;
-(BOOL)isCanceled;

@end


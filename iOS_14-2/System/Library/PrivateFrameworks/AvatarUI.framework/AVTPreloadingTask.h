/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTPreloadingTask <AVTCancelable>
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler; 
@required
-(void)setCanceled:(BOOL)arg1;
-(BOOL)isCanceled;
-(id)completionHandler;

@end


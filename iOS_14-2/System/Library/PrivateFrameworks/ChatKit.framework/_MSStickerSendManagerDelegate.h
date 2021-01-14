/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol _MSStickerSendManagerDelegate <NSObject>
@required
-(void)stickerDragCanceled;
-(void)insertSticker:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startDragSticker:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)stickerDragMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 fence:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end


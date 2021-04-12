/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPCFuture, MPCMediaRemoteController;


@protocol MPCMediaRemoteMiddlewareControllerProviding <NSObject>
@property (nonatomic,readonly) MPCFuture * controllerFuture; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller; 
@required
-(MPCMediaRemoteController *)controller;
-(MPCFuture *)controllerFuture;

@end


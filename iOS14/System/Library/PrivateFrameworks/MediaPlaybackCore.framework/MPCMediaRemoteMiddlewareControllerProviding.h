/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


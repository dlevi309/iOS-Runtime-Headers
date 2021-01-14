/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRNowPlayingControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 didLoadResponse:(id)arg2;
-(void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned)arg2 to:(unsigned)arg3;
-(void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 contentItemsDidUpdate:(id)arg2;
-(void)controller:(id)arg1 didLoadArtworkForContentItems:(id)arg2;
-(void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
-(void)controller:(id)arg1 didUpdateResponse:(id)arg2;
-(void)controllerWillReloadForInvalidation:(id)arg1;
-(void)controller:(id)arg1 didFailWithError:(id)arg2;

@end


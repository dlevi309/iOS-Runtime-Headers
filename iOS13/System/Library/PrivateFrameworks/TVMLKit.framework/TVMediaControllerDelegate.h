/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol TVMediaControllerDelegate <NSObject>
@optional
-(void)coverImageDidChangeForMediaController:(id)arg1;
-(void)didFinishPlaybackForMediaController:(id)arg1;
-(void)stateDidChangeForMediaController:(id)arg1;
-(void)mediaController:(id)arg1 shouldShowStill:(inout BOOL*)arg2 afterStoppingForReason:(long long)arg3;

@end


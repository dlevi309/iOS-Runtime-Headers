/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol TVMediaControllerDelegate <NSObject>
@optional
-(void)stateDidChangeForMediaController:(id)arg1;
-(void)mediaController:(id)arg1 shouldShowStill:(inout BOOL*)arg2 afterStoppingForReason:(long long)arg3;
-(void)coverImageDidChangeForMediaController:(id)arg1;
-(void)didFinishPlaybackForMediaController:(id)arg1;

@end


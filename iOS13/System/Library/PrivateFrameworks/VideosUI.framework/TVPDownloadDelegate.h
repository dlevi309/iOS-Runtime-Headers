/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 willDownloadToURL:(id)arg2;
-(void)download:(id)arg1 progressDidChange:(double)arg2;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2;
-(void)download:(id)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
-(void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;

@end


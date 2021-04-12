/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPDownloadDelegate <NSObject>
@optional
-(void)download:(id)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
-(void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
-(void)download:(id)arg1 willDownloadToURL:(id)arg2;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2;
-(void)download:(id)arg1 progressDidChange:(double)arg2;

@end


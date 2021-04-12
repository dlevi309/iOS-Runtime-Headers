/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VideosExtrasImageBrowserViewControllerDataSource <NSObject>
@required
-(void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;

@end


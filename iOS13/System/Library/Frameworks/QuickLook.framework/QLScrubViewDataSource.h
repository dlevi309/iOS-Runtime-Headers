/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLScrubViewDataSource
@required
-(long long)numberOfPagesInScrubView:(id)arg1;
-(CGSize*)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2;
-(void)scrubView:(id)arg1 thumbnailForPage:(long long)arg2 size:(CGSize)arg3 withCompletionBlock:(/*^block*/id)arg4;

@end


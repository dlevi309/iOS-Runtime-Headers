/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLScrubViewDataSource
@required
-(long long)numberOfPagesInScrubView:(id)arg1;
-(CGSize*)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2;
-(void)scrubView:(id)arg1 thumbnailForPage:(long long)arg2 size:(CGSize)arg3 withCompletionBlock:(/*^block*/id)arg4;

@end


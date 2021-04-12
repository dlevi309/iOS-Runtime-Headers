/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OFUIPagingViewDelegate <NSObject>
@optional
-(void)currentPageDidChangeInPagingView:(id)arg1;
-(void)pagesDidChangeInPagingView:(id)arg1;
-(void)pagingViewWillBeginMoving:(id)arg1;
-(void)pagingViewDidEndMoving:(id)arg1;

@required
-(long long)numberOfPagesInPagingView:(id)arg1;
-(id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2;

@end


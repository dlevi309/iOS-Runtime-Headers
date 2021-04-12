/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemClustererRule <NSObject>
@required
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(/*^block*/id)arg3;
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(BOOL)arg3 resultBlock:(/*^block*/id)arg4;
-(BOOL)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
-(BOOL)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;

@end


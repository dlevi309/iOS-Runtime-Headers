/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemClustererRule <NSObject>
@required
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(/*^block*/id)arg3;
-(BOOL)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
-(BOOL)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
-(void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(BOOL)arg3 resultBlock:(/*^block*/id)arg4;

@end


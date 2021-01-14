/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSync.MapsSyncDataQueryDelegate
@optional
-(void)queryIsReadyWithQuery:(id)arg1;
-(void)queryContentsWillChangeWithQuery:(id)arg1;
-(void)queryContentsDidChangeObjectWithQuery:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
-(void)queryContentsDidLoadWithQuery:(id)arg1;

@required
-(void)queryContentsDidChangeWithQuery:(id)arg1;

@end


/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(BOOL)_isResetting;
-(void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
-(BOOL)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
-(BOOL)_didFinishSearchForType:(unsigned long long)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/id)arg1;
-(void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


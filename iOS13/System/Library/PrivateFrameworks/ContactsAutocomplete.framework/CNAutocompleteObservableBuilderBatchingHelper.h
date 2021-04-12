/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>
@required
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1;
-(void)addCoreRecentsObservable:(id)arg1;
-(void)addSuggestionsObservable:(id)arg1;
-(void)addLocalExtensionObservable:(id)arg1;
-(void)addDuetObservable:(id)arg1;
-(void)addSupplementalObservable:(id)arg1;
-(void)addCachedDirectoryServerObservable:(id)arg1;
-(void)addDirectoryServerObservable:(id)arg1;
-(void)addCachedCalendarServerObservable:(id)arg1;
-(void)addCalendarServerObservable:(id)arg1;

@end


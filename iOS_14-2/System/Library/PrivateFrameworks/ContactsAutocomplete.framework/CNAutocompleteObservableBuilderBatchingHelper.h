/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


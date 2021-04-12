/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteObservableBuilderBatchingHelper.h>

@class _CNAutocompleteObservableBuilderBatchingHelper, NSString;

@interface _CNAutocompleteStandardObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper> {

	_CNAutocompleteObservableBuilderBatchingHelper* _helper;

}

@property (nonatomic,retain) _CNAutocompleteObservableBuilderBatchingHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_CNAutocompleteObservableBuilderBatchingHelper *)helper;
-(void)setHelper:(_CNAutocompleteObservableBuilderBatchingHelper *)arg1 ;
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1 ;
-(void)addCoreRecentsObservable:(id)arg1 ;
-(void)addSuggestionsObservable:(id)arg1 ;
-(void)addLocalExtensionObservable:(id)arg1 ;
-(void)addDuetObservable:(id)arg1 ;
-(void)addSupplementalObservable:(id)arg1 ;
-(void)addCachedDirectoryServerObservable:(id)arg1 ;
-(void)addDirectoryServerObservable:(id)arg1 ;
-(void)addCachedCalendarServerObservable:(id)arg1 ;
-(void)addCalendarServerObservable:(id)arg1 ;
@end


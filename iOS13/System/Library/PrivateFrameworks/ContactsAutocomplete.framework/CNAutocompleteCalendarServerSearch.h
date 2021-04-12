/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class EKEventStore, CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch> {

	EKEventStore* _eventStore;
	CNAutocompleteCalendarServerOperationFactory* _operationFactory;
	CNStringTokenizer* _tokenizer;

}

@property (nonatomic,retain) CNStringTokenizer * tokenizer;                                                  //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) EKEventStore * eventStore;                                                    //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) CNAutocompleteCalendarServerOperationFactory * operationFactory;              //@synthesize operationFactory=_operationFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CNStringTokenizer *)tokenizer;
-(void)setTokenizer:(CNStringTokenizer *)arg1 ;
-(EKEventStore *)eventStore;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 operationFactory:(id)arg2 ;
-(id)executeRequest:(id)arg1 source:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)queryForFetchRequest:(id)arg1 ;
-(CNAutocompleteCalendarServerOperationFactory *)operationFactory;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 ;
@end


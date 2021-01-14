/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@class CNAutocompleteQueryResponsePreparer;

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer {

	CNAutocompleteQueryResponsePreparer* _preparer;

}

@property (readonly) CNAutocompleteQueryResponsePreparer * preparer;              //@synthesize preparer=_preparer - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id)arg1 ;
-(void)setMatchingPriorityResultsPromise:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 ;
-(CNAutocompleteQueryResponsePreparer *)preparer;
@end


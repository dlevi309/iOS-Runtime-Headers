/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


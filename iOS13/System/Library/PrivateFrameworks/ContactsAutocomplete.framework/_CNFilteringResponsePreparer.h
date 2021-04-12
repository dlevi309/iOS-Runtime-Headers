/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	/*^block*/id _filter;

}

@property (copy,readonly) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)filter;
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(/*^block*/id)arg3 ;
@end


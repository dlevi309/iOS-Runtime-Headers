/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@protocol CNFuture;
@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	id<CNFuture> _logFuture;

}

@property (readonly) id<CNFuture> logFuture;              //@synthesize logFuture=_logFuture - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(/*^block*/id)arg3 ;
-(id<CNFuture>)logFuture;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CLSDataStore, NSString;

@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch> {

	CLSDataStore* _dataStore;

}

@property (nonatomic,readonly) CLSDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLSDataStore *)dataStore;
-(id)initWithDataStore:(id)arg1 ;
-(id)init;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


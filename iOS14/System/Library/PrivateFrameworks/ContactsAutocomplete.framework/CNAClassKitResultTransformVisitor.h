/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
@class NSMutableArray, CNAutocompleteResultFactory, CLSDataStore;

@interface CNAClassKitResultTransformVisitor : NSObject {

	NSMutableArray* _results;
	CNAutocompleteResultFactory* _factory;
	CLSDataStore* _dataStore;
	unsigned long long _searchType;

}

@property (nonatomic,readonly) CNAutocompleteResultFactory * factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) CLSDataStore * dataStore;                           //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) unsigned long long searchType;                      //@synthesize searchType=_searchType - In the implementation block
+(id)addressForPerson:(id)arg1 searchType:(unsigned long long)arg2 ;
-(CLSDataStore *)dataStore;
-(unsigned long long)searchType;
-(CNAutocompleteResultFactory *)factory;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3 ;
-(id)reduceCollection:(id)arg1 ;
-(void)visitPerson:(id)arg1 ;
-(void)visitClass:(id)arg1 ;
@end


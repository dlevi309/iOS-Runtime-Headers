/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNAutocompleteResultFactory *)factory;
-(unsigned long long)searchType;
-(CLSDataStore *)dataStore;
-(id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3 ;
-(id)reduceCollection:(id)arg1 ;
-(void)visitPerson:(id)arg1 ;
-(void)visitClass:(id)arg1 ;
@end


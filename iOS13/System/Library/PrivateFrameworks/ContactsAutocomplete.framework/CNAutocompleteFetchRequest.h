/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNAutocompleteFetchContext, NSNumber, NSArray;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _searchString;
	NSString* _priorityDomainForSorting;
	unsigned long long _searchType;
	CNAutocompleteFetchContext* _fetchContext;
	NSNumber* _shouldIncludeGroupResultsImpl;
	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeLocalExtensions;
	BOOL _includeDirectoryServers;
	BOOL _includeCalendarServers;
	BOOL _includePredictions;

}

@property (readonly) NSArray * searchableProperties; 
@property (copy) NSString * searchString;                                //@synthesize searchString=_searchString - In the implementation block
@property (copy) NSString * priorityDomainForSorting;                    //@synthesize priorityDomainForSorting=_priorityDomainForSorting - In the implementation block
@property (assign) unsigned long long searchType;                        //@synthesize searchType=_searchType - In the implementation block
@property (copy) CNAutocompleteFetchContext * fetchContext;              //@synthesize fetchContext=_fetchContext - In the implementation block
@property (assign) BOOL includeContacts;                                 //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) BOOL includeRecents;                                  //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) BOOL includeSuggestions;                              //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) BOOL includeLocalExtensions;                          //@synthesize includeLocalExtensions=_includeLocalExtensions - In the implementation block
@property (assign) BOOL includeDirectoryServers;                         //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) BOOL includeCalendarServers;                          //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) BOOL includePredictions;                              //@synthesize includePredictions=_includePredictions - In the implementation block
@property (assign) BOOL shouldIncludeGroupResults; 
@property (copy) NSString * sendingAddress; 
@property (assign) BOOL includeServers; 
+(BOOL)supportsSecureCoding;
+(id)request;
+(id)searchablePropertiesForSearchType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(CNAutocompleteFetchContext *)fetchContext;
-(BOOL)isValid:(id*)arg1 ;
-(unsigned long long)searchType;
-(void)setSearchType:(unsigned long long)arg1 ;
-(BOOL)includeRecents;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setIncludePredictions:(BOOL)arg1 ;
-(void)setIncludeDirectoryServers:(BOOL)arg1 ;
-(void)setIncludeCalendarServers:(BOOL)arg1 ;
-(void)setFetchContext:(CNAutocompleteFetchContext *)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
-(void)setShouldIncludeGroupResults:(BOOL)arg1 ;
-(void)setIncludeServers:(BOOL)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(BOOL)includeServers;
-(BOOL)shouldIncludeGroupResults;
-(void)setIncludeLocalExtensions:(BOOL)arg1 ;
-(NSString *)priorityDomainForSorting;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(id)includeDebugString;
-(id)searchTypeDebugString;
-(id)shouldIncludeGroupResultsDebugString;
-(id)executeWithDelegate:(id)arg1 ;
-(NSArray *)searchableProperties;
@end


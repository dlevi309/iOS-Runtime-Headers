/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {

	BOOL _includePhotos;
	BOOL _calendarInitiated;
	NSString* _searchBase;
	NSString* _searchScope;

}

@property (nonatomic,copy) NSString * searchBase;                 //@synthesize searchBase=_searchBase - In the implementation block
@property (nonatomic,copy) NSString * searchScope;                //@synthesize searchScope=_searchScope - In the implementation block
@property (assign,nonatomic) BOOL includePhotos;                  //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign,nonatomic) BOOL calendarInitiated;              //@synthesize calendarInitiated=_calendarInitiated - In the implementation block
+(id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(id)dictionaryRepresentation;
-(void)setIncludePhotos:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(void)setSearchBase:(NSString *)arg1 ;
-(void)setSearchScope:(NSString *)arg1 ;
-(NSString *)searchBase;
-(NSString *)searchScope;
-(BOOL)includePhotos;
-(BOOL)calendarInitiated;
-(void)setCalendarInitiated:(BOOL)arg1 ;
@end


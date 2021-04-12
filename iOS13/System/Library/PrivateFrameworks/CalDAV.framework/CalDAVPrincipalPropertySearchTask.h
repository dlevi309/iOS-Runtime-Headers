/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {

	id _searchContext;
	NSSet* _searchTypes;
	NSSet* _searchStrings;
	CalDAVPrincipalSearchPropertySet* _serverSupportSet;

}

@property (nonatomic,retain) NSSet * searchTypes;                                              //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                                            //@synthesize searchStrings=_searchStrings - In the implementation block
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;              //@synthesize serverSupportSet=_serverSupportSet - In the implementation block
@property (nonatomic,retain) id searchContext;                                                 //@synthesize searchContext=_searchContext - In the implementation block
-(id)searchItems;
-(id)searchContext;
-(void)setSearchContext:(id)arg1 ;
-(id)extraAttributes;
-(void)setSearchTypes:(NSSet *)arg1 ;
-(NSSet *)searchTypes;
-(NSSet *)searchStrings;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setServerSupportSet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)serverSupportSet;
@end


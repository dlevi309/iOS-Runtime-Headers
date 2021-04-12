/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSearchTypes:(NSSet *)arg1 ;
-(id)searchItems;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
-(void)setSearchContext:(id)arg1 ;
-(id)searchContext;
-(NSSet *)searchStrings;
-(id)extraAttributes;
-(NSSet *)searchTypes;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setServerSupportSet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)serverSupportSet;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {

	BOOL _findAttendees;
	BOOL _findLocations;
	BOOL _findUsers;
	BOOL _findGroups;
	BOOL _findResources;
	unsigned long long _resultLimit;
	NSSet* _searchStrings;

}

@property (nonatomic,retain) NSSet * searchStrings;                       //@synthesize searchStrings=_searchStrings - In the implementation block
@property (assign,nonatomic) BOOL findAttendees;                          //@synthesize findAttendees=_findAttendees - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign) BOOL findUsers;                                        //@synthesize findUsers=_findUsers - In the implementation block
@property (assign) BOOL findGroups;                                       //@synthesize findGroups=_findGroups - In the implementation block
@property (assign) BOOL findResources;                                    //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
+(BOOL)tokensAreLegal:(id)arg1 ;
-(id)searchItems;
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(id)extraAttributes;
-(id)httpMethod;
-(void)setFindLocations:(BOOL)arg1 ;
-(id)requestBody;
-(BOOL)findGroups;
-(BOOL)findLocations;
-(BOOL)findResources;
-(BOOL)findUsers;
-(void)setFindGroups:(BOOL)arg1 ;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
-(NSSet *)searchStrings;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setFindAttendees:(BOOL)arg1 ;
-(BOOL)findAttendees;
-(id)initWithSearchStrings:(id)arg1 atURL:(id)arg2 ;
@end


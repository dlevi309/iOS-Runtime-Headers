/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSSet;

@interface EKDirectorySearchQuery : NSObject {

	BOOL _findGroups;
	BOOL _findLocations;
	BOOL _findResources;
	BOOL _findUsers;
	NSSet* _terms;
	unsigned long long _resultLimit;

}

@property (nonatomic,retain) NSSet * terms;                               //@synthesize terms=_terms - In the implementation block
@property (assign,nonatomic) BOOL findGroups;                             //@synthesize findGroups=_findGroups - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign,nonatomic) BOOL findResources;                          //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) BOOL findUsers;                              //@synthesize findUsers=_findUsers - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
-(NSSet *)terms;
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(BOOL)findGroups;
-(BOOL)findResources;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindGroups:(BOOL)arg1 ;
-(BOOL)findUsers;
-(void)setTerms:(NSSet *)arg1 ;
-(BOOL)findLocations;
-(void)setFindLocations:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(void)setTerms:(NSSet *)arg1 ;
-(void)setFindLocations:(BOOL)arg1 ;
-(NSSet *)terms;
-(BOOL)findGroups;
-(BOOL)findLocations;
-(BOOL)findResources;
-(BOOL)findUsers;
-(void)setFindGroups:(BOOL)arg1 ;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
@end


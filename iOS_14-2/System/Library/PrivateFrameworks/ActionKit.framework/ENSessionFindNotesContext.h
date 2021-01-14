/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class ENNotebook, EDAMNoteFilter, EDAMNotesMetadataResultSpec, NSArray, NSMutableArray, NSSet;

@interface ENSessionFindNotesContext : NSObject {

	BOOL _requiresLocalMerge;
	BOOL _sortAscending;
	ENNotebook* _scopeNotebook;
	unsigned long long _scope;
	unsigned long long _sortOrder;
	EDAMNoteFilter* _noteFilter;
	EDAMNotesMetadataResultSpec* _resultSpec;
	unsigned long long _maxResults;
	NSArray* _allNotebooks;
	NSMutableArray* _linkedNotebooksToSearch;
	NSMutableArray* _findMetadataResults;
	NSSet* _resultGuidsFromBusiness;
	NSArray* _results;
	/*^block*/id _completion;

}

@property (nonatomic,retain) ENNotebook * scopeNotebook;                            //@synthesize scopeNotebook=_scopeNotebook - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                              //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) unsigned long long sortOrder;                          //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * noteFilter;                           //@synthesize noteFilter=_noteFilter - In the implementation block
@property (nonatomic,retain) EDAMNotesMetadataResultSpec * resultSpec;              //@synthesize resultSpec=_resultSpec - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                         //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalMerge;                               //@synthesize requiresLocalMerge=_requiresLocalMerge - In the implementation block
@property (assign,nonatomic) BOOL sortAscending;                                    //@synthesize sortAscending=_sortAscending - In the implementation block
@property (nonatomic,retain) NSArray * allNotebooks;                                //@synthesize allNotebooks=_allNotebooks - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedNotebooksToSearch;              //@synthesize linkedNotebooksToSearch=_linkedNotebooksToSearch - In the implementation block
@property (nonatomic,retain) NSMutableArray * findMetadataResults;                  //@synthesize findMetadataResults=_findMetadataResults - In the implementation block
@property (nonatomic,retain) NSSet * resultGuidsFromBusiness;                       //@synthesize resultGuidsFromBusiness=_resultGuidsFromBusiness - In the implementation block
@property (nonatomic,retain) NSArray * results;                                     //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)sortOrder;
-(void)setScope:(unsigned long long)arg1 ;
-(NSArray *)results;
-(void)setCompletion:(id)arg1 ;
-(unsigned long long)scope;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(id)completion;
-(unsigned long long)maxResults;
-(void)setSortOrder:(unsigned long long)arg1 ;
-(BOOL)sortAscending;
-(EDAMNoteFilter *)noteFilter;
-(void)setNoteFilter:(EDAMNoteFilter *)arg1 ;
-(NSSet *)resultGuidsFromBusiness;
-(NSArray *)allNotebooks;
-(ENNotebook *)scopeNotebook;
-(NSMutableArray *)findMetadataResults;
-(BOOL)requiresLocalMerge;
-(EDAMNotesMetadataResultSpec *)resultSpec;
-(NSMutableArray *)linkedNotebooksToSearch;
-(void)setLinkedNotebooksToSearch:(NSMutableArray *)arg1 ;
-(void)setResultGuidsFromBusiness:(NSSet *)arg1 ;
-(void)setAllNotebooks:(NSArray *)arg1 ;
-(void)setSortAscending:(BOOL)arg1 ;
-(void)setRequiresLocalMerge:(BOOL)arg1 ;
-(void)setFindMetadataResults:(NSMutableArray *)arg1 ;
-(void)setResultSpec:(EDAMNotesMetadataResultSpec *)arg1 ;
-(void)setScopeNotebook:(ENNotebook *)arg1 ;
@end


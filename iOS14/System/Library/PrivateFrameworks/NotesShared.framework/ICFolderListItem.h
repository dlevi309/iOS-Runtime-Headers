/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class ICNoteContainer, NoteCollectionObject, NSMutableArray, ICFolderListViewState, NSString;

@interface ICFolderListItem : NSObject {

	BOOL _isAccount;
	BOOL _isAccountProxy;
	BOOL _isLegacy;
	BOOL _isDefaultFolder;
	BOOL _isTrash;
	ICNoteContainer* _noteContainer;
	NoteCollectionObject* _noteCollection;
	NSMutableArray* _children;
	ICFolderListItem* _parent;
	ICFolderListViewState* _viewState;
	unsigned long long _folderListItemAccountType;

}

@property (assign,nonatomic) BOOL isAccount;                                              //@synthesize isAccount=_isAccount - In the implementation block
@property (assign,nonatomic) BOOL isAccountProxy;                                         //@synthesize isAccountProxy=_isAccountProxy - In the implementation block
@property (assign,nonatomic) BOOL isLegacy;                                               //@synthesize isLegacy=_isLegacy - In the implementation block
@property (assign,nonatomic) BOOL isDefaultFolder;                                        //@synthesize isDefaultFolder=_isDefaultFolder - In the implementation block
@property (assign,nonatomic) BOOL isTrash;                                                //@synthesize isTrash=_isTrash - In the implementation block
@property (nonatomic,retain) ICNoteContainer * noteContainer;                             //@synthesize noteContainer=_noteContainer - In the implementation block
@property (nonatomic,retain) NoteCollectionObject * noteCollection;                       //@synthesize noteCollection=_noteCollection - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (nonatomic,readonly) BOOL isCollapsible; 
@property (nonatomic,retain) NSMutableArray * children;                                   //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) ICFolderListItem * parent;                            //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic,__weak) ICFolderListViewState * viewState;                    //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,readonly) unsigned long long countOfVisibleDescendants; 
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic) unsigned long long folderListItemAccountType;                //@synthesize folderListItemAccountType=_folderListItemAccountType - In the implementation block
-(NSMutableArray *)children;
-(BOOL)isCollapsed;
-(ICFolderListItem *)parent;
-(BOOL)isLegacy;
-(ICNoteContainer *)noteContainer;
-(NoteCollectionObject *)noteCollection;
-(BOOL)isAccount;
-(id)flattenedChildItems;
-(id)initWithViewState:(id)arg1 ;
-(void)setIsAccount:(BOOL)arg1 ;
-(void)setIsAccountProxy:(BOOL)arg1 ;
-(void)setIsLegacy:(BOOL)arg1 ;
-(void)setNoteContainer:(ICNoteContainer *)arg1 ;
-(void)setIsTrash:(BOOL)arg1 ;
-(void)setIsDefaultFolder:(BOOL)arg1 ;
-(void)addNoteContainer:(id)arg1 folderToExclude:(id)arg2 ;
-(unsigned long long)countOfVisibleDescendants;
-(void)insertChildItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isAccountProxy;
-(BOOL)isDefaultFolder;
-(void)setNoteCollection:(NoteCollectionObject *)arg1 ;
-(unsigned long long)folderListItemAccountType;
-(void)setFolderListItemAccountType:(unsigned long long)arg1 ;
-(void)setParent:(ICFolderListItem *)arg1 ;
-(void)setViewState:(ICFolderListViewState *)arg1 ;
-(id)description;
-(unsigned long long)level;
-(BOOL)isTrash;
-(void)addChildItem:(id)arg1 ;
-(ICFolderListViewState *)viewState;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsible;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(NSString *)title;
@end


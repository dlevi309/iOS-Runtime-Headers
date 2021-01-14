/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableSet, NSString, NSMutableArray, NSCountedSet, NSNumber;

@interface ICFolderListViewState : NSObject {

	BOOL _overrideCollapsed;
	BOOL _showSharedFoldersOnly;
	BOOL _showFoldersThatCanMoveAddOrDeleteContentsOnly;
	NSMutableSet* _expandedFolderIdentifiers;
	NSMutableSet* _collapsedAccountIdentifiers;
	NSMutableSet* _collapsedLegacyAccountIdentifiers;
	NSString* _overrideCollapsedFolder;
	NSMutableArray* _accounts;
	NSCountedSet* _folderNamesCountedSet;
	NSNumber* _customFoldersExistValue;

}

@property (nonatomic,retain) NSMutableArray * accounts;                                       //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSCountedSet * folderNamesCountedSet;                            //@synthesize folderNamesCountedSet=_folderNamesCountedSet - In the implementation block
@property (nonatomic,retain) NSNumber * customFoldersExistValue;                              //@synthesize customFoldersExistValue=_customFoldersExistValue - In the implementation block
@property (nonatomic,retain) NSMutableSet * expandedFolderIdentifiers;                        //@synthesize expandedFolderIdentifiers=_expandedFolderIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * collapsedAccountIdentifiers;                      //@synthesize collapsedAccountIdentifiers=_collapsedAccountIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * collapsedLegacyAccountIdentifiers;                //@synthesize collapsedLegacyAccountIdentifiers=_collapsedLegacyAccountIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL overrideCollapsed;                                          //@synthesize overrideCollapsed=_overrideCollapsed - In the implementation block
@property (nonatomic,copy) NSString * overrideCollapsedFolder;                                //@synthesize overrideCollapsedFolder=_overrideCollapsedFolder - In the implementation block
@property (assign,nonatomic) BOOL showSharedFoldersOnly;                                      //@synthesize showSharedFoldersOnly=_showSharedFoldersOnly - In the implementation block
@property (assign,nonatomic) BOOL showFoldersThatCanMoveAddOrDeleteContentsOnly;              //@synthesize showFoldersThatCanMoveAddOrDeleteContentsOnly=_showFoldersThatCanMoveAddOrDeleteContentsOnly - In the implementation block
@property (nonatomic,readonly) BOOL customFoldersExist; 
-(void)setAccounts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)accounts;
-(id)init;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSMutableSet *)collapsedLegacyAccountIdentifiers;
-(NSMutableSet *)collapsedAccountIdentifiers;
-(BOOL)overrideCollapsed;
-(NSString *)overrideCollapsedFolder;
-(NSMutableSet *)expandedFolderIdentifiers;
-(void)setOverrideCollapsedFolder:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)getModernAccountFolderListType:(id)arg1 ;
-(void)addFolderListItem:(id)arg1 ;
-(BOOL)showFoldersThatCanMoveAddOrDeleteContentsOnly;
-(BOOL)showSharedFoldersOnly;
-(void)invalidateDerivedFolderState;
-(unsigned long long)getLegacyAccountFolderListType:(id)arg1 ;
-(id)indexesOfICAccounts;
-(id)indexesOfLegacyAccounts;
-(void)addICAccount:(id)arg1 includingTrash:(BOOL)arg2 alwaysIncludeAccountProxy:(BOOL)arg3 ;
-(void)addICAccounts:(id)arg1 forMovingFolder:(id)arg2 ;
-(void)addLegacyAccount:(id)arg1 includeAllNotesFolder:(BOOL)arg2 ;
-(unsigned long long)countOfAccounts;
-(unsigned long long)countOfICAccounts;
-(unsigned long long)indexOfICAccount:(id)arg1 ;
-(unsigned long long)countOfLegacyAccounts;
-(void)removeICAccounts;
-(void)removeLegacyAccounts;
-(unsigned long long)countOfItemsInAccountAtIndex:(unsigned long long)arg1 ;
-(id)accountItemAtIndex:(unsigned long long)arg1 ;
-(id)indexPathOfNoteContainer:(id)arg1 ;
-(void)setOverrideCollapsed:(BOOL)arg1 ;
-(void)folderMovedFromOldFolder:(id)arg1 toNewFolder:(id)arg2 ;
-(BOOL)customFoldersExist;
-(NSCountedSet *)folderNamesCountedSet;
-(void)setExpandedFolderIdentifiers:(NSMutableSet *)arg1 ;
-(void)setCollapsedAccountIdentifiers:(NSMutableSet *)arg1 ;
-(void)setCollapsedLegacyAccountIdentifiers:(NSMutableSet *)arg1 ;
-(void)setShowSharedFoldersOnly:(BOOL)arg1 ;
-(void)setShowFoldersThatCanMoveAddOrDeleteContentsOnly:(BOOL)arg1 ;
-(void)setFolderNamesCountedSet:(NSCountedSet *)arg1 ;
-(NSNumber *)customFoldersExistValue;
-(void)setCustomFoldersExistValue:(NSNumber *)arg1 ;
@end


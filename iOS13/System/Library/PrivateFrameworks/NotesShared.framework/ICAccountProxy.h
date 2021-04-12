/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSString, NSManagedObjectContext, ICFolderCustomNoteSortType, NSArray, NSData;

@interface ICAccountProxy : NSObject <ICNoteContainer> {

	ICAccount* _account;

}

@property (retain) ICAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
@property (readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) ICFolderCustomNoteSortType * customNoteSortType; 
@property (nonatomic,readonly) BOOL isSharedViaICloud; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,readonly) BOOL canBeSharedViaICloud; 
@property (nonatomic,readonly) BOOL supportsEditingNotes; 
@property (nonatomic,readonly) BOOL isTrashFolder; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * visibleSubFolders; 
@property (nonatomic,retain) NSData * subFolderOrderMergeableData; 
+(id)accountProxyWithAccount:(id)arg1 ;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
-(long long)compare:(id)arg1 ;
-(ICAccount *)account;
-(void)setAccount:(ICAccount *)arg1 ;
-(NSString *)containerIdentifier;
-(NSManagedObjectContext *)managedObjectContext;
-(id)accountName;
-(BOOL)isLeaf;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)isDeleted;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isAllNotesContainer;
-(BOOL)isSharedViaICloud;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(id)detailForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isModernCustomFolder;
-(void)saveSubFolderMergeableDataIfNeeded;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg1 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(ICAccount *)noteContainerAccount;
-(ICFolderCustomNoteSortType *)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(BOOL)isTrashFolder;
-(NSArray *)visibleSubFolders;
-(NSData *)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(NSData *)arg1 ;
-(id)customNoteSortTypeValue;
-(id)visibleNoteContainerChildren;
@end


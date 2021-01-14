/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSManagedObjectContext, ICFolderCustomNoteSortType, NSString, NSArray, NSData;

@interface ICAccountProxy : NSObject <ICNoteContainer> {

	ICAccount* _account;

}

@property (retain) ICAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
@property (readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) ICFolderCustomNoteSortType * customNoteSortType; 
@property (nonatomic,readonly) BOOL isSharedViaICloud; 
@property (nonatomic,readonly) BOOL isSharedReadOnly; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,readonly) BOOL canBeSharedViaICloud; 
@property (nonatomic,readonly) BOOL supportsEditingNotes; 
@property (nonatomic,readonly) BOOL isTrashFolder; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * visibleSubFolders; 
@property (nonatomic,retain) NSData * subFolderOrderMergeableData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountProxyWithAccount:(id)arg1 ;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
-(NSManagedObjectContext *)managedObjectContext;
-(ICAccount *)account;
-(id)accountName;
-(long long)compare:(id)arg1 ;
-(void)setAccount:(ICAccount *)arg1 ;
-(BOOL)isAllNotesContainer;
-(ICFolderCustomNoteSortType *)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(BOOL)isTrashFolder;
-(NSArray *)visibleSubFolders;
-(NSData *)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(NSData *)arg1 ;
-(id)customNoteSortTypeValue;
-(BOOL)isLeaf;
-(NSString *)containerIdentifier;
-(BOOL)isDeleted;
-(id)visibleNoteContainerChildren;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)initWithAccount:(id)arg1 ;
-(id)predicateForVisibleNotes;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForPinnedNotes;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedReadOnly;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isModernCustomFolder;
-(void)saveSubFolderMergeableDataIfNeeded;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg1 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(ICAccount *)noteContainerAccount;
@end


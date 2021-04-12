/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconIndexNode.h>
#import <libobjc.A.dylib/SBIconIndexMutableListObserver.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, SBIconIndexMutableList, NSMutableSet, NSCountedSet, NSString, SBFolderIcon, NSArray;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver, BSDescriptionProviding> {

	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
	BOOL _displayNameDirty;
	BOOL _open;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	NSString* _nodeIdentifier;
	NSString* _uniqueIdentifier;
	NSString* _displayName;
	NSString* _defaultDisplayName;
	SBFolderIcon* _icon;
	unsigned long long _maxListCount;
	unsigned long long _maxIconCountInLists;
	unsigned long long _maxIconCountInFirstList;
	unsigned long long _requiredTrailingEmptyListCount;

}

@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * defaultDisplayName;                                    //@synthesize defaultDisplayName=_defaultDisplayName - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                        //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIcon * icon;                                     //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isCancelable,nonatomic) BOOL cancelable;                            //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,readonly) SBFolder * parentFolder; 
@property (nonatomic,__weak,readonly) SBFolder * rootFolder; 
@property (nonatomic,readonly) Class listModelClass; 
@property (nonatomic,copy,readonly) NSArray * lists; 
@property (nonatomic,readonly) unsigned long long listCount; 
@property (nonatomic,readonly) unsigned long long maxListCount;                              //@synthesize maxListCount=_maxListCount - In the implementation block
@property (nonatomic,readonly) unsigned long long maxIconCountInLists;                       //@synthesize maxIconCountInLists=_maxIconCountInLists - In the implementation block
@property (nonatomic,readonly) unsigned long long maxIconCountInFirstList;                   //@synthesize maxIconCountInFirstList=_maxIconCountInFirstList - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isFull,nonatomic,readonly) BOOL full; 
@property (nonatomic,readonly) BOOL shouldRemoveWhenEmpty; 
@property (nonatomic,readonly) BOOL canRemoveIcons; 
@property (nonatomic,readonly) BOOL canEditDisplayName; 
@property (assign,nonatomic) unsigned long long requiredTrailingEmptyListCount;              //@synthesize requiredTrailingEmptyListCount=_requiredTrailingEmptyListCount - In the implementation block
@property (nonatomic,readonly) unsigned long long trailingEmptyListCount; 
@property (nonatomic,copy,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSArray * iconsInLists; 
@property (nonatomic,copy,readonly) NSString * recursiveDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFolderNodeIdentifier:(id)arg1 ;
+(BOOL)isRootFolderClass;
-(id)init;
-(NSString *)description;
-(BOOL)isEmpty;
-(NSArray *)icons;
-(NSString *)uniqueIdentifier;
-(NSString *)displayName;
-(BOOL)isOpen;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBFolderIcon *)icon;
-(void)setIcon:(SBFolderIcon *)arg1 ;
-(NSString *)recursiveDescription;
-(void)setOpen:(BOOL)arg1 ;
-(id)addIcon:(id)arg1 ;
-(void)sort;
-(SBFolder *)parentFolder;
-(BOOL)isFull;
-(id)nodeIdentifier;
-(void)addIcons:(id)arg1 ;
-(BOOL)isRootFolder;
-(NSArray *)lists;
-(BOOL)isCancelable;
-(void)setCancelable:(BOOL)arg1 ;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(SBFolder *)rootFolder;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(void)removeFolderObserver:(id)arg1 ;
-(unsigned long long)listCount;
-(id)addEmptyList;
-(void)addFolderObserver:(id)arg1 ;
-(void)setRequiredTrailingEmptyListCount:(unsigned long long)arg1 ;
-(id)listsContainingIcon:(id)arg1 ;
-(unsigned long long)indexOfList:(id)arg1 ;
-(id)indexPathForIcon:(id)arg1 ;
-(unsigned long long)maxListCount;
-(BOOL)compactLists;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(BOOL)canAddIconCount:(unsigned long long)arg1 ;
-(id)listAtIndex:(unsigned long long)arg1 ;
-(id)indexPathForNodeIdentifier:(id)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(void)enumerateAllIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(BOOL)arg2 ;
-(BOOL)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(id)_listsForCompaction;
-(BOOL)canBounceIcon:(id)arg1 ;
-(BOOL)containsIcon:(id)arg1 ;
-(id)indexPathForIconWithIdentifier:(id)arg1 ;
-(void)removeIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(id)indexPathForIconWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexPathsForIconsPassingTest:(/*^block*/id)arg1 ;
-(id)placeIcon:(id)arg1 atIndexPath:(id)arg2 ;
-(id)insertIcon:(id)arg1 atIndexPath:(id*)arg2 options:(unsigned long long)arg3 ;
-(id)indexPathForIconWithIdentifier:(id)arg1 includingPlaceholders:(BOOL)arg2 ;
-(id)folderIcons;
-(void)enumerateAllIconsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexPathForFolder:(id)arg1 ;
-(BOOL)isValidPageIndex:(unsigned long long)arg1 ;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg1 ;
-(id)indexPathForIcon:(id)arg1 includingPlaceholders:(BOOL)arg2 ;
-(id)addListWithIcon:(id)arg1 ;
-(id)listsContainingLeafIconWithIdentifier:(id)arg1 ;
-(void)startCoalescingContentChangesWithRequestID:(id)arg1 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 ;
-(id)leafIcons;
-(id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 maxIconCountInLists:(unsigned long long)arg3 ;
-(void)removeAllLists;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(BOOL)arg2 ;
-(id)allIcons;
-(BOOL)shouldRemoveWhenEmpty;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)containedNodeIdentifiers;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)listDidMoveNodes:(id)arg1 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(unsigned long long)arg3 maxIconCountInLists:(unsigned long long)arg4 ;
-(BOOL)_compactLists;
-(unsigned long long)requiredTrailingEmptyListCount;
-(void)_removeLists:(id)arg1 ;
-(unsigned long long)trailingEmptyListCount;
-(void)_didAddList:(id)arg1 ;
-(void)didAddFolder:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(void)didRemoveFolder:(id)arg1 ;
-(id)_createNewListWithIcon:(id)arg1 ;
-(void)_insertList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isIconStateDirty;
-(void)markIconStateClean;
-(Class)listModelClass;
-(void)removeIconAtIndexPath:(id)arg1 options:(unsigned long long)arg2 ;
-(void)addIconsOfClass:(Class)arg1 toSet:(id)arg2 ;
-(id)iconsOfClass:(Class)arg1 ;
-(NSString *)defaultDisplayName;
-(BOOL)_isCoalescingContentChanges;
-(void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)iconsInLists;
-(void)appendRecursiveDescriptionToString:(id)arg1 prefixPath:(id)arg2 ;
-(void)ensureTrailingEmptyLists;
-(void)_setLists:(id)arg1 ;
-(id)insertEmptyListAtIndex:(unsigned long long)arg1 ;
-(void)removeList:(id)arg1 ;
-(void)removeListAtIndex:(unsigned long long)arg1 ;
-(void)replaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(BOOL)canAddIcon;
-(id)indexPathForIconPassingTest:(/*^block*/id)arg1 ;
-(id)firstFolderWithDisplayName:(id)arg1 ;
-(id)firstFolderWithDefaultDisplayName:(id)arg1 ;
-(void)setDefaultDisplayName:(NSString *)arg1 ;
-(unsigned long long)maxIconCountInLists;
-(unsigned long long)maxIconCountInFirstList;
@end


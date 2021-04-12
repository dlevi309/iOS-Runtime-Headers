/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconIndexMutableListObserver.h>
#import <libobjc.A.dylib/SBTreeNode.h>
#import <libobjc.A.dylib/SBIconIndexNode.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SBTreeNode;
@class SBIconIndexMutableList, NSHashTable, NSMutableArray, NSString, SBFolder, NSArray;

@interface SBIconListModel : NSObject <SBIconIndexMutableListObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration> {

	SBIconIndexMutableList* _icons;
	unsigned long long _maxIconCount;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	NSMutableArray* _nodeObserverTransactionStack;
	BOOL _iconStateIsDirty;
	id<SBTreeNode> _parent;
	NSString* _uniqueIdentifier;
	SBFolder* _folder;

}

@property (nonatomic,__weak,readonly) SBFolder * folder;                                    //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfIcons; 
@property (nonatomic,readonly) unsigned long long numberOfNonPlaceholderIcons; 
@property (nonatomic,readonly) unsigned long long maxNumberOfIcons; 
@property (nonatomic,copy) NSArray * icons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<SBTreeNode> parent;                                  //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<SBTreeNode>)parent;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEmpty;
-(void)setParent:(id<SBTreeNode>)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(NSArray *)icons;
-(NSString *)uniqueIdentifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)children;
-(void)removeChild:(id)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(BOOL)addIcon:(id)arg1 ;
-(BOOL)isFull;
-(id)nodeIdentifier;
-(void)addIcons:(id)arg1 ;
-(SBFolder *)folder;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)addListObserver:(id)arg1 ;
-(BOOL)directlyContainsIcon:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(unsigned long long)numberOfIcons;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(unsigned long long)firstFreeSlotIndex;
-(BOOL)allowsAddingIconCount:(unsigned long long)arg1 ;
-(BOOL)canBounceIcon:(id)arg1 ;
-(void)removeIconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForIcon:(id)arg1 ;
-(void)moveContainedIcons:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2 ;
-(id)directlyContainedIconWithIdentifier:(id)arg1 ;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeIcon:(id)arg1 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)containedNodeIdentifiers;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)listDidMoveNodes:(id)arg1 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(unsigned long long)numberOfNonPlaceholderIcons;
-(void)enumerateFolderIconsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeListObserver:(id)arg1 ;
-(BOOL)isIconStateDirty;
-(void)markIconStateClean;
-(id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2 ;
-(id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)maxNumberOfIcons;
-(void)addIconsOfClass:(Class)arg1 toSet:(id)arg2 ;
-(id)iconsOfClass:(Class)arg1 ;
-(BOOL)directlyContainsLeafIconWithIdentifier:(id)arg1 ;
-(void)ancestryDidChange;
-(void)removeAllIcons;
-(BOOL)allowsAddingIcon:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 folder:(id)arg2 maxIconCount:(unsigned long long)arg3 ;
-(id)_iconAtIndex:(unsigned long long)arg1 ;
-(BOOL)addIcon:(id)arg1 asDirty:(BOOL)arg2 ;
-(void)willAddIcon:(id)arg1 ;
-(void)_notifyListObservers:(/*^block*/id)arg1 ;
-(void)markIconStateDirty;
-(id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 notifyingObservers:(BOOL)arg3 ;
-(BOOL)isFullIncludingPlaceholders;
-(void)_coalesceChangesWithRequestID:(id)arg1 changeBlock:(/*^block*/id)arg2 ;
-(BOOL)directlyContainsIconWithIdentifier:(id)arg1 ;
-(id)directlyContainedIconPassingTest:(/*^block*/id)arg1 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveContainedIcon:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end


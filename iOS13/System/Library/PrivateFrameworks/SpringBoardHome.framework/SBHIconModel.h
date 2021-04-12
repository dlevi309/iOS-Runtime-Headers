/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconDelegate.h>

@protocol SBIconModelStore, SBHIconModelDelegate;
@class NSMutableDictionary, NSHashTable, NSSet, SBRootFolder, NSDictionary, NSOrderedSet, SBIcon, NSString;

@interface SBHIconModel : NSObject <SBFolderObserver, SBIconDelegate> {

	NSMutableDictionary* _leafIconsByIdentifier;
	NSMutableDictionary* _leafIdentifiersForMasqueradeIdentifier;
	NSHashTable* _folders;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
	BOOL _tagsHaveBeenSet;
	NSMutableDictionary* _alternateListLayouts;
	BOOL _ignoresIconsNotInIconState;
	BOOL _sortsIconsAlphabetically;
	BOOL _layingOut;
	BOOL _restoring;
	BOOL _allowsDownloadingIcons;
	id<SBIconModelStore> _store;
	id<SBHIconModelDelegate> _delegate;
	SBRootFolder* _rootFolder;
	NSDictionary* _desiredIconState;
	NSSet* _archivedLeafIdentifiers;
	NSOrderedSet* _desiredIconStateFlattened;
	SBIcon* _rootFolderIcon;

}

@property (nonatomic,copy) NSSet * archivedLeafIdentifiers;                               //@synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredIconState;                               //@synthesize desiredIconState=_desiredIconState - In the implementation block
@property (nonatomic,copy) NSOrderedSet * desiredIconStateFlattened;                      //@synthesize desiredIconStateFlattened=_desiredIconStateFlattened - In the implementation block
@property (assign,getter=isLayingOut,nonatomic) BOOL layingOut;                           //@synthesize layingOut=_layingOut - In the implementation block
@property (nonatomic,retain) SBIcon * rootFolderIcon;                                     //@synthesize rootFolderIcon=_rootFolderIcon - In the implementation block
@property (nonatomic,readonly) id<SBIconModelStore> store;                                //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIconModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBRootFolder * rootFolder;                                 //@synthesize rootFolder=_rootFolder - In the implementation block
@property (nonatomic,readonly) unsigned long long maxListCountForFolders; 
@property (nonatomic,readonly) unsigned long long maxIconCountForDock; 
@property (nonatomic,readonly) BOOL supportsDock; 
@property (nonatomic,copy,readonly) NSSet * visibleIconIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * hiddenIconTags;                               //@synthesize hiddenIconTags=_hiddenIconTags - In the implementation block
@property (nonatomic,copy,readonly) NSSet * visibleIconTags;                              //@synthesize visibleIconTags=_visibleIconTags - In the implementation block
@property (nonatomic,copy,readonly) NSSet * leafIcons; 
@property (nonatomic,copy,readonly) NSSet * currentLeafIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * leafIconIdentifiers; 
@property (assign,nonatomic) BOOL ignoresIconsNotInIconState;                             //@synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState - In the implementation block
@property (assign,nonatomic) BOOL sortsIconsAlphabetically;                               //@synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically - In the implementation block
@property (nonatomic,readonly) BOOL hasDesiredIconState; 
@property (nonatomic,copy,readonly) NSSet * missingDesiredIconIdentifiers; 
@property (nonatomic,copy,readonly) NSDictionary * defaultIconState; 
@property (nonatomic,copy,readonly) NSSet * firstPageLeafIdentifiers; 
@property (assign,getter=isRestoring,nonatomic) BOOL restoring;                           //@synthesize restoring=_restoring - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDefaultFolderName; 
@property (nonatomic,copy,readonly) NSString * unlocalizedDefaultFolderName; 
@property (assign,nonatomic) BOOL allowsDownloadingIcons;                                 //@synthesize allowsDownloadingIcons=_allowsDownloadingIcons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migratedIdentifierForLeafIdentifier:(id)arg1 ;
-(id)init;
-(id<SBHIconModelDelegate>)delegate;
-(void)setDelegate:(id<SBHIconModelDelegate>)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id<SBIconModelStore>)store;
-(void)layout;
-(void)layoutIfNeeded;
-(void)addIcon:(id)arg1 ;
-(id)_iconState;
-(BOOL)isRestoring;
-(void)setRestoring:(BOOL)arg1 ;
-(BOOL)isLayingOut;
-(SBRootFolder *)rootFolder;
-(BOOL)supportsDock;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3 ;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(id)desiredIndexPathForIconWithIdentifier:(id)arg1 ;
-(void)checkModelConsistency;
-(void)saveIconStateIfNeeded;
-(void)clearDesiredIconState;
-(id)leafIconForIdentifier:(id)arg1 ;
-(BOOL)isIconVisible:(id)arg1 ;
-(id)addDownloadingIconWithDataSource:(id)arg1 ;
-(void)removeIconForIdentifier:(id)arg1 ;
-(id)downloadingIconForBundleIdentifier:(id)arg1 ;
-(void)removeIcon:(id)arg1 ;
-(void)clearDesiredIconStateIfPossible;
-(id)desiredFolderCreationActionsForInsertingNewIcon:(id)arg1 ;
-(id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(BOOL*)arg2 replaceExistingIconAtIndexPath:(id*)arg3 ;
-(BOOL)deleteIconStateWithOptions:(unsigned long long)arg1 ;
-(void)clearDesiredIconStateWithOptions:(unsigned long long)arg1 ;
-(NSSet *)leafIcons;
-(unsigned long long)maxListCountForFolders;
-(unsigned long long)maxIconCountForListInFolderClass:(Class)arg1 ;
-(NSString *)localizedDefaultFolderName;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(void)reloadIcons;
-(void)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)addIconsOfClass:(Class)arg1 toSet:(id)arg2 ;
-(id)iconsOfClass:(Class)arg1 ;
-(void)setSortsIconsAlphabetically:(BOOL)arg1 ;
-(BOOL)sortsIconsAlphabetically;
-(void)removeAllIcons;
-(void)loadAllIcons;
-(id)leafIdentifiersForMasqueradeIdentifier:(id)arg1 ;
-(id)prioritizedMasqueradeIconForIdentifier:(id)arg1 ;
-(NSDictionary *)defaultIconState;
-(id)indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(BOOL*)arg3 replaceExistingIconAtIndexPath:(id*)arg4 ;
-(id)_adjustedDesiredIndexPathInRootFolder:(id)arg1 forIconWithIdentifier:(id)arg2 ;
-(id)_adjustedPlatformIndexPathInRootFolder:(id)arg1 forIcon:(id)arg2 ;
-(BOOL)ignoresIconsNotInIconState;
-(NSSet *)archivedLeafIdentifiers;
-(NSSet *)firstPageLeafIdentifiers;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(id)_adjustedIndexPathInRootFolder:(id)arg1 withinIconState:(id)arg2 forIconWithIdentifier:(id)arg3 ;
-(BOOL)hasDesiredIconState;
-(NSSet *)currentLeafIdentifiers;
-(void)setDesiredIconState:(NSDictionary *)arg1 ;
-(void)setDesiredIconStateFlattened:(NSOrderedSet *)arg1 ;
-(NSSet *)leafIconIdentifiers;
-(void)enumerateMasqueradeLeafIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDownloadingIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)modernizeRootArchive:(id)arg1 ;
-(id)iconState;
-(BOOL)deleteIconState;
-(void)didUnarchiveMetadata:(id)arg1 ;
-(void)checkModelConsistencyInRootFolder:(id)arg1 ;
-(id)iconModelMetadata;
-(void)_saveIconState;
-(void)saveDesiredIconState;
-(void)_rootFolder:(id)arg1 moveIconsToFirstPage:(id)arg2 placeBumpedIconsSomewhereNice:(id)arg3 ;
-(NSSet *)visibleIconIdentifiers;
-(void)enumerateLeafIconsUsingBlock:(/*^block*/id)arg1 ;
-(void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4 ;
-(void)setLayingOut:(BOOL)arg1 ;
-(void)willLayout;
-(id)_unarchiveRootFolder;
-(void)setRootFolderIcon:(SBIcon *)arg1 ;
-(void)setArchivedLeafIdentifiers:(NSSet *)arg1 ;
-(NSString *)unlocalizedDefaultFolderName;
-(BOOL)allowsDownloadingIcons;
-(BOOL)_canAddDownloadingIconForBundleID:(id)arg1 ;
-(BOOL)isTrackingIcon:(id)arg1 ;
-(unsigned long long)maxIconCountForDock;
-(unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg1 ;
-(id)leafIconsForIdentifiers:(id)arg1 ;
-(BOOL)isMasqueradedLeafIdentifier:(id)arg1 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(NSSet *)missingDesiredIconIdentifiers;
-(void)importDesiredIconState:(id)arg1 ;
-(void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2 ;
-(NSSet *)hiddenIconTags;
-(NSSet *)visibleIconTags;
-(void)setIgnoresIconsNotInIconState:(BOOL)arg1 ;
-(NSDictionary *)desiredIconState;
-(void)setAllowsDownloadingIcons:(BOOL)arg1 ;
-(NSOrderedSet *)desiredIconStateFlattened;
-(SBIcon *)rootFolderIcon;
-(void)setLeafIconsByIdentifier:(id)arg1 ;
-(void)setLeafIdentifiersForMasqueradeIdentifier:(id)arg1 ;
-(void)setForecastedLeavesAndMasqueradesOnIconModel:(id)arg1 includingMissingIcons:(id)arg2 ;
@end


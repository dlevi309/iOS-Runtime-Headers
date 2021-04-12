/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>

@class NSHashTable, NSMutableSet, SBFolder, NSString;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {

	NSHashTable* _nodeObservers;
	NSMutableSet* _finishedDownloadIdentifiers;
	long long _progressState;
	double _progressPercent;
	CFRunLoopObserverRef _updateIconRunLoopObserver;
	SBFolder* _folder;

}

@property (nonatomic,readonly) SBFolder * folder;                   //@synthesize folder=_folder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasIconImage;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)children;
-(void)removeChild:(id)arg1 ;
-(void)_updateProgress;
-(id)nodeIdentifier;
-(SBFolder *)folder;
-(void)localeChanged;
-(void)updateLabel;
-(long long)progressState;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(id)rootFolder;
-(BOOL)isFolderIcon;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3 ;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(Class)iconImageViewClassForLocation:(id)arg1 ;
-(BOOL)isProgressPaused;
-(double)progressPercent;
-(BOOL)shouldAnimateProgress;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(id)leafIconsWithBadgesSortedByImportance;
-(id)displayNameForLocation:(id)arg1 ;
-(void)rootFolderDelegateDidChange:(id)arg1 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(BOOL)canBeAddedToMultiItemDrag;
-(id)initWithFolder:(id)arg1 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)containedNodeIdentifiers;
-(void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)badgeNumberOrString;
-(void)_updateBadgeValue;
-(void)invalidateUpdateIconRunLoopObserver;
-(void)_performDelayedIconUpdates;
-(void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)_containedIconImageChanged:(id)arg1 ;
-(unsigned long long)listIndexForContainedIcon:(id)arg1 ;
-(void)ancestryDidChange;
-(void)_containedIconAccessoriesDidUpdate:(id)arg1 ;
-(void)_containedIconLaunchEnabledDidUpdate:(id)arg1 ;
-(unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1 ;
-(id)iconAtListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2 ;
@end


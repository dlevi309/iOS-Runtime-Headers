/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBTreeNode.h>
#import <libobjc.A.dylib/SBIconIndexNode.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBTreeNode, SBIconDelegate;
@class NSArray, NSString, NSHashTable;

@interface SBIcon : NSObject <SBTreeNode, SBIconIndexNode, BSDescriptionProviding, NSCopying> {

	id _badgeNumberOrString;
	NSHashTable* _observers;
	BOOL _uninstalled;
	id<SBTreeNode> _parent;
	id<SBIconDelegate> _delegate;
	NSString* _iconFileSizeDescription;

}

@property (assign,nonatomic,__weak) id<SBIconDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldWarmUp; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL canTruncateLabel; 
@property (nonatomic,readonly) BOOL canTightenLabel; 
@property (nonatomic,copy,readonly) NSArray * tags; 
@property (nonatomic,readonly) long long badgeValue; 
@property (nonatomic,readonly) id badgeNumberOrString; 
@property (nonatomic,readonly) NSString * iconCategoryDescription; 
@property (nonatomic,readonly) NSString * iconFileSizeDescription;                                                         //@synthesize iconFileSizeDescription=_iconFileSizeDescription - In the implementation block
@property (nonatomic,readonly) long long labelAccessoryType; 
@property (getter=isLaunchEnabled,nonatomic,readonly) BOOL launchEnabled; 
@property (getter=isLaunchDisabledForObscuredReason,nonatomic,readonly) BOOL launchDisabledForObscuredReason; 
@property (nonatomic,readonly) long long progressState; 
@property (nonatomic,readonly) double progressPercent; 
@property (getter=isProgressPaused,nonatomic,readonly) BOOL progressPaused; 
@property (nonatomic,readonly) BOOL shouldAnimateProgress; 
@property (getter=isUninstalled,nonatomic,readonly) BOOL uninstalled;                                                      //@synthesize uninstalled=_uninstalled - In the implementation block
@property (getter=isUninstallSupported,nonatomic,readonly) BOOL uninstallSupported; 
@property (nonatomic,copy,readonly) NSString * uninstallAlertTitle; 
@property (nonatomic,copy,readonly) NSString * uninstallAlertBody; 
@property (nonatomic,copy,readonly) NSString * uninstallAlertConfirmTitle; 
@property (nonatomic,copy,readonly) NSString * uninstallAlertCancelTitle; 
@property (getter=isTimedOut,nonatomic,readonly) BOOL timedOut; 
@property (nonatomic,copy,readonly) NSArray * folderTitleOptions; 
@property (nonatomic,copy,readonly) NSString * folderFallbackTitle; 
@property (nonatomic,readonly) BOOL canReceiveGrabbedIcon; 
@property (nonatomic,readonly) BOOL canBeAddedToMultiItemDrag; 
@property (nonatomic,copy,readonly) NSString * automationID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<SBTreeNode> parent;                                                                 //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
+(Class)downloadingIconClass;
+(BOOL)hasIconImage;
+(BOOL)canGenerateIconsInBackground;
+(id)iconImageFromUnmaskedImage:(id)arg1 info:(SBIconImageInfo)arg2 ;
+(BOOL)forcesBackgroundIconGeneration;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SBTreeNode>)parent;
-(void)setParent:(id<SBTreeNode>)arg1 ;
-(id<SBIconDelegate>)delegate;
-(void)setDelegate:(id<SBIconDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)tags;
-(NSString *)uniqueIdentifier;
-(NSString *)displayName;
-(BOOL)isPlaceholder;
-(void)setBadge:(id)arg1 ;
-(id)applicationBundleID;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)children;
-(void)removeChild:(id)arg1 ;
-(long long)badgeValue;
-(BOOL)hasObserver:(id)arg1 ;
-(id)nodeIdentifier;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)folder;
-(BOOL)isTimedOut;
-(void)localeChanged;
-(long long)progressState;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(BOOL)isFolderIcon;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)iconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)isLaunchEnabled;
-(BOOL)isLaunchDisabledForObscuredReason;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1 ;
-(long long)labelAccessoryType;
-(Class)iconImageViewClassForLocation:(id)arg1 ;
-(long long)accessoryTypeForLocation:(id)arg1 ;
-(NSString *)automationID;
-(BOOL)canReceiveGrabbedIcon;
-(id)representedSceneIdentifier;
-(void)launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)isProgressPaused;
-(double)progressPercent;
-(BOOL)shouldAnimateProgress;
-(id)downloadingIconDataSource;
-(NSString *)uninstallAlertBody;
-(id)descriptionForLocation:(id)arg1 ;
-(BOOL)isDownloadingIcon;
-(BOOL)assumesAppInstallFinishedForFolderProgress;
-(id)displayNameForLocation:(id)arg1 ;
-(BOOL)isLeafIcon;
-(id)leafIdentifier;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(BOOL)isGrabbedIconPlaceholder;
-(BOOL)isUninstalled;
-(BOOL)canBeAddedToMultiItemDrag;
-(void)setUninstalled;
-(void)completeUninstall;
-(NSArray *)folderTitleOptions;
-(NSString *)folderFallbackTitle;
-(void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)possibleUserTapDidCancel;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)containedNodeIdentifiers;
-(long long)localizedCompareDisplayNames:(id)arg1 ;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)_notifyAccessoriesDidUpdate;
-(void)_notifyLaunchEnabledDidChange;
-(void)reloadIconImage;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)badgeNumberOrString;
-(id)accessoryTextForLocation:(id)arg1 ;
-(id)masqueradeIdentifier;
-(BOOL)isUninstallSupported;
-(void)ancestryDidChange;
-(id)parentFolderIcon;
-(void)_notifyImageDidUpdate;
-(void)noteBadgeDidChange;
-(BOOL)shouldWarmUp;
-(NSString *)uninstallAlertTitle;
-(NSString *)uninstallAlertConfirmTitle;
-(NSString *)uninstallAlertCancelTitle;
-(NSString *)iconCategoryDescription;
-(id)iconSizeDescription;
-(NSString *)iconFileSizeDescription;
@end


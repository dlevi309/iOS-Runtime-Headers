/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/FBSApplicationPlaceholderObserver.h>
#import <libobjc.A.dylib/SBDownloadingIconDataSource.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBApplicationPlaceholderDelegate;
@class NSString, NSMutableDictionary, NSMutableSet, FBSApplicationPlaceholder;

@interface SBApplicationPlaceholder : NSObject <FBSApplicationPlaceholderObserver, SBDownloadingIconDataSource, BSInvalidatable> {

	BOOL _invalidated;
	NSMutableDictionary* _generatedIconImagesByKey;
	NSMutableSet* _formatsPendingGeneration;
	FBSApplicationPlaceholder* _placeholderProxy;
	id<SBApplicationPlaceholderDelegate> _delegate;

}

@property (nonatomic,readonly) FBSApplicationPlaceholder * placeholderProxy;                    //@synthesize placeholderProxy=_placeholderProxy - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) Class iconClass; 
@property (getter=isPrioritizable,nonatomic,readonly) BOOL prioritizable; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
@property (getter=isCancelable,nonatomic,readonly) BOOL cancelable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * applicationBundleID; 
@property (nonatomic,copy,readonly) NSString * applicationDisplayName; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isWaiting,nonatomic,readonly) BOOL waiting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (getter=isInstalling,nonatomic,readonly) BOOL installing; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isCloudDemoted,nonatomic,readonly) BOOL cloudDemoted; 
+(id)backgroundQueue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(id<SBApplicationPlaceholderDelegate>)delegate;
-(void)setDelegate:(id<SBApplicationPlaceholderDelegate>)arg1 ;
-(BOOL)isActive;
-(BOOL)cancel;
-(BOOL)pause;
-(BOOL)resume;
-(BOOL)prioritize;
-(BOOL)isPaused;
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(unsigned long long)installType;
-(BOOL)isInstalling;
-(NSString *)applicationBundleID;
-(BOOL)isFailed;
-(BOOL)isDownloading;
-(void)placeholderProgressDidUpdate:(id)arg1 ;
-(void)placeholderDidChangeSignificantly:(id)arg1 ;
-(BOOL)isDone;
-(BOOL)isCancelable;
-(BOOL)isWaiting;
-(BOOL)isCloudDemoted;
-(NSString *)applicationDisplayName;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)iconCanTruncateLabel:(id)arg1 ;
-(BOOL)iconCanTightenLabel:(id)arg1 ;
-(long long)progressStateForIcon:(id)arg1 ;
-(double)progressPercentForIcon:(id)arg1 ;
-(BOOL)isProgressPausedForIcon:(id)arg1 ;
-(id)badgeNumberOrStringForIcon:(id)arg1 ;
-(id)formattedAccessoryStringForIcon:(id)arg1 ;
-(long long)accessoryTypeForIcon:(id)arg1 ;
-(long long)labelAccessoryTypeForIcon:(id)arg1 ;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(Class)iconClass;
-(BOOL)_shouldDisplayAppName;
-(FBSApplicationPlaceholder *)placeholderProxy;
-(void)_progressChanged;
-(void)_reloadThumbnailImage;
-(id)_iconImageKeyForBundleID:(id)arg1 info:(SBIconImageInfo)arg2 ;
-(void)_generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)_generatePendingIconFormats;
-(BOOL)_shouldDisplayAppNameAtIconLocation:(id)arg1 ;
-(id)_getOrGenerateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)initWithPlaceholderProxy:(id)arg1 ;
-(BOOL)isStoreDownload;
@end


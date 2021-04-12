/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _appClip;
	FBSApplicationPlaceholder* _placeholderProxy;
	id<SBApplicationPlaceholderDelegate> _delegate;

}

@property (nonatomic,readonly) FBSApplicationPlaceholder * placeholderProxy;                    //@synthesize placeholderProxy=_placeholderProxy - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAppClip,nonatomic,readonly) BOOL appClip;                                   //@synthesize appClip=_appClip - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
+(id)backgroundQueue;
-(Class)iconClass;
-(BOOL)isPausable;
-(unsigned long long)installType;
-(BOOL)isPrioritizable;
-(BOOL)isAppClip;
-(BOOL)isCancelable;
-(BOOL)isInstalling;
-(id<SBApplicationPlaceholderDelegate>)delegate;
-(long long)accessoryTypeForIcon:(id)arg1 ;
-(BOOL)pause;
-(BOOL)iconCanTightenLabel:(id)arg1 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(BOOL)isActive;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)prioritize;
-(void)placeholderProgressDidUpdate:(id)arg1 ;
-(void)placeholderDidChangeSignificantly:(id)arg1 ;
-(void)setDelegate:(id<SBApplicationPlaceholderDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)isWaiting;
-(BOOL)iconCanTruncateLabel:(id)arg1 ;
-(id)badgeNumberOrStringForIcon:(id)arg1 ;
-(void)invalidate;
-(BOOL)isDownloading;
-(id)formattedAccessoryStringForIcon:(id)arg1 ;
-(BOOL)isDone;
-(long long)progressStateForIcon:(id)arg1 ;
-(double)progressPercentForIcon:(id)arg1 ;
-(BOOL)isProgressPausedForIcon:(id)arg1 ;
-(NSString *)applicationBundleID;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)cancel;
-(NSString *)applicationDisplayName;
-(BOOL)isCloudDemoted;
-(BOOL)resume;
-(BOOL)isFailed;
-(BOOL)isPaused;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)labelAccessoryTypeForIcon:(id)arg1 ;
-(void)_progressChanged;
-(BOOL)_shouldDisplayAppName;
-(FBSApplicationPlaceholder *)placeholderProxy;
-(void)_reloadThumbnailImage;
-(id)_iconImageKeyForBundleID:(id)arg1 info:(SBIconImageInfo)arg2 ;
-(void)_generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)_generatePendingIconFormats;
-(BOOL)_shouldDisplayAppNameAtIconLocation:(id)arg1 ;
-(id)_getOrGenerateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)initWithPlaceholderProxy:(id)arg1 ;
-(BOOL)isStoreDownload;
@end


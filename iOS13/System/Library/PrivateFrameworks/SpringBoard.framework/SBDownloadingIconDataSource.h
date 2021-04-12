/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBDownloadingIconDataSource <SBLeafIconDataSource>
@property (nonatomic,copy,readonly) NSString * applicationBundleID; 
@property (nonatomic,copy,readonly) NSString * applicationDisplayName; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isWaiting,nonatomic,readonly) BOOL waiting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (getter=isCancelable,nonatomic,readonly) BOOL cancelable; 
@property (getter=isInstalling,nonatomic,readonly) BOOL installing; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isPrioritizable,nonatomic,readonly) BOOL prioritizable; 
@property (getter=isCloudDemoted,nonatomic,readonly) BOOL cloudDemoted; 
@property (nonatomic,readonly) Class iconClass; 
@optional
-(Class)iconClass;

@required
-(BOOL)isActive;
-(BOOL)cancel;
-(BOOL)pause;
-(BOOL)resume;
-(BOOL)prioritize;
-(BOOL)isPaused;
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(BOOL)isInstalling;
-(NSString *)applicationBundleID;
-(BOOL)isFailed;
-(BOOL)isDownloading;
-(BOOL)isCancelable;
-(BOOL)isWaiting;
-(BOOL)isCloudDemoted;
-(NSString *)applicationDisplayName;

@end


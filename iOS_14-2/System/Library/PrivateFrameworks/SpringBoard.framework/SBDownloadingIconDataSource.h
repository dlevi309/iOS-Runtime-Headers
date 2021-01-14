/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(BOOL)isCancelable;
-(BOOL)isInstalling;
-(BOOL)pause;
-(BOOL)isActive;
-(BOOL)prioritize;
-(BOOL)isWaiting;
-(BOOL)isDownloading;
-(NSString *)applicationBundleID;
-(BOOL)cancel;
-(NSString *)applicationDisplayName;
-(BOOL)isCloudDemoted;
-(BOOL)resume;
-(BOOL)isFailed;
-(BOOL)isPaused;

@end


/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBDownloadingIconDataSource.h>

@class NSString;

@interface SBHFakeDownloadingIconDataSource : NSObject <SBDownloadingIconDataSource> {

	BOOL isCancelable;
	BOOL isCloudDemoted;
	BOOL isPausable;
	BOOL isPrioritizable;
	BOOL _isPaused;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	double _progress;

}

@property (nonatomic,copy) NSString * applicationBundleID;                             //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                          //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (assign,nonatomic) double progress;                                          //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL isCloudDemoted; 
@property (assign,nonatomic) BOOL isPrioritizable; 
@property (assign,nonatomic) BOOL isPausable; 
@property (assign,nonatomic) BOOL isCancelable; 
@property (assign,nonatomic) BOOL isPaused;                                            //@synthesize isPaused=_isPaused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(BOOL)isActive;
-(BOOL)cancel;
-(BOOL)pause;
-(BOOL)resume;
-(BOOL)prioritize;
-(double)progress;
-(BOOL)isPaused;
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(BOOL)isInstalling;
-(NSString *)applicationBundleID;
-(BOOL)isFailed;
-(void)setProgress:(double)arg1 ;
-(BOOL)isDownloading;
-(BOOL)isCancelable;
-(void)setIsPaused:(BOOL)arg1 ;
-(BOOL)isWaiting;
-(BOOL)isCloudDemoted;
-(NSString *)applicationDisplayName;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(long long)progressStateForIcon:(id)arg1 ;
-(double)progressPercentForIcon:(id)arg1 ;
-(void)setIsCancelable:(BOOL)arg1 ;
-(void)setIsCloudDemoted:(BOOL)arg1 ;
-(void)setIsPausable:(BOOL)arg1 ;
-(void)setIsPrioritizable:(BOOL)arg1 ;
@end


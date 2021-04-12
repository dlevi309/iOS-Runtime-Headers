/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class SBSplashBoardController, FBSApplicationLibrary, NSMutableSet, NSObject, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface SBApplicationLibraryObserver : NSObject <MCProfileConnectionObserver> {

	SBSplashBoardController* _splashBoardController;
	FBSApplicationLibrary* _appLibrary;
	NSMutableSet* _suspendCalloutsAssertionReasons;
	NSObject*<OS_dispatch_queue> _mainQueueProxy;
	NSMutableDictionary* _placeholdersByBundleID;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;

}

@property (nonatomic,copy,readonly) NSArray * placeholders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSArray *)placeholders;
-(id)initWithAppLibrary:(id)arg1 ;
-(void)addApplicationLifecycleObserver:(id)arg1 ;
-(id)suspendCalloutsAssertionWithReason:(id)arg1 ;
-(void)_didUpdateApplications:(id)arg1 ;
-(void)_didAddPlaceholders:(id)arg1 ;
-(void)_didCancelPlaceholders:(id)arg1 ;
-(void)_didAddApplications:(id)arg1 ;
-(void)_didReplaceApplications:(id)arg1 ;
-(void)_didRemoveApplications:(id)arg1 ;
-(void)_didDemoteApplications:(id)arg1 ;
-(void)_didChangeNetworkUsage:(BOOL)arg1 ;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)_waitForLaunchImageGenerationForApplications:(id)arg1 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
@end


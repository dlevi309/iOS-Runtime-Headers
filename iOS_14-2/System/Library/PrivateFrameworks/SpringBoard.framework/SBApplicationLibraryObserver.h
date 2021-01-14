/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class XBApplicationController, FBSApplicationLibrary, NSMutableSet, NSObject, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface SBApplicationLibraryObserver : NSObject <MCProfileConnectionObserver> {

	XBApplicationController* _splashBoardController;
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
-(void)_didUpdateApplications:(id)arg1 ;
-(void)_didAddPlaceholders:(id)arg1 ;
-(id)suspendCalloutsAssertionWithReason:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_waitForLaunchImageGenerationForApplications:(id)arg1 ;
-(id)init;
-(id)_appBundleIDsForApplications:(id)arg1 ;
-(void)_didAddApplications:(id)arg1 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(NSArray *)placeholders;
-(void)_didDemoteApplications:(id)arg1 ;
-(id)initWithAppLibrary:(id)arg1 splashBoardController:(id)arg2 ;
-(void)_didReplaceApplications:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_didRemoveApplications:(id)arg1 ;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(void)_didChangeNetworkUsage:(BOOL)arg1 ;
-(void)_didCancelPlaceholders:(id)arg1 ;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
-(void)addApplicationLifecycleObserver:(id)arg1 ;
@end


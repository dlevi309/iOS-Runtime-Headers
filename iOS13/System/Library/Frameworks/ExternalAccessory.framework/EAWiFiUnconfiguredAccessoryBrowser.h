/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSPredicate;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {

	BOOL __debugLog;
	id<EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
	NSSet* _unconfiguredAccessories;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSPredicate* _accessorySearchPredicate;

}

@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) NSPredicate * accessorySearchPredicate;                                                //@synthesize accessorySearchPredicate=_accessorySearchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSSet * unconfiguredAccessories;                                                //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
-(id)init;
-(void)dealloc;
-(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)delegate;
-(void)setDelegate:(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_handleBrowserDidUpdateState:(id)arg1 ;
-(void)_handleNewAccessoriesNotification:(id)arg1 ;
-(void)_handleRemovedAccessoriesNotification:(id)arg1 ;
-(void)_handlePurgeAccessoriesSetNotification:(id)arg1 ;
-(void)stopSearchingForUnconfiguredAccessories;
-(void)setAccessorySearchPredicate:(NSPredicate *)arg1 ;
-(void)_handleBrowserFinishedConfiguring:(id)arg1 ;
-(void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2 ;
-(NSPredicate *)accessorySearchPredicate;
-(NSSet *)unconfiguredAccessories;
-(void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSHomeScreenServiceClientToServerInterface.h>

@class NSNumber, SBIconController, FBServiceClientAuthenticator, NSMutableSet, BSServiceConnectionListener, NSString;

@interface SBHomeScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSHomeScreenServiceClientToServerInterface> {

	os_unfair_lock_s _lock;
	SBIconController* _iconController;
	FBServiceClientAuthenticator* _resetHomeScreenLayoutAuthenticator;
	FBServiceClientAuthenticator* _requestSuggestedAppAuthenticator;
	FBServiceClientAuthenticator* _iconFolderPathLookupAuthenticator;
	FBServiceClientAuthenticator* _addWidgetToTodayViewAuthenticator;
	FBServiceClientAuthenticator* _lowDensityLayoutAuthenticator;
	NSMutableSet* _activeConnections;
	BSServiceConnectionListener* _connectionListener;

}

@property (nonatomic,readonly) SBIconController * iconController;                                              //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * resetHomeScreenLayoutAuthenticator;              //@synthesize resetHomeScreenLayoutAuthenticator=_resetHomeScreenLayoutAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * requestSuggestedAppAuthenticator;                //@synthesize requestSuggestedAppAuthenticator=_requestSuggestedAppAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * iconFolderPathLookupAuthenticator;               //@synthesize iconFolderPathLookupAuthenticator=_iconFolderPathLookupAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * addWidgetToTodayViewAuthenticator;               //@synthesize addWidgetToTodayViewAuthenticator=_addWidgetToTodayViewAuthenticator - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * lowDensityLayoutAuthenticator;                   //@synthesize lowDensityLayoutAuthenticator=_lowDensityLayoutAuthenticator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activeConnections;                                               //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionListener * connectionListener;                               //@synthesize connectionListener=_connectionListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
-(NSMutableSet *)activeConnections;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSNumber *)lowDensityIconLayoutEnabledValue;
-(void)setLowDensityIconLayoutEnabledValue:(NSNumber *)arg1 ;
-(BSServiceConnectionListener *)connectionListener;
-(SBIconController *)iconController;
-(id)initWithIconController:(id)arg1 ;
-(FBServiceClientAuthenticator *)resetHomeScreenLayoutAuthenticator;
-(FBServiceClientAuthenticator *)requestSuggestedAppAuthenticator;
-(FBServiceClientAuthenticator *)iconFolderPathLookupAuthenticator;
-(FBServiceClientAuthenticator *)addWidgetToTodayViewAuthenticator;
-(FBServiceClientAuthenticator *)lowDensityLayoutAuthenticator;
@end


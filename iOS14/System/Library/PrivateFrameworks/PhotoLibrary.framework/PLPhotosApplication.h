/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString, NSDictionary, NSSet;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {

	BOOL _receivingRemoteControlEvents;
	int _observeForRechabilityChanges;
	BOOL _isReachable;
	BOOL _isOnWifi;
	int _photoStreamActivityToken;
	int _sharedPhotoStreamActivityToken;
	int _sharedPhotoStreamInvitationFailureToken;
	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	long long _waitForGraphCount;
	NSSet* _notificationSuppressionContexts;

}

@property (nonatomic,readonly) BOOL isReachable;                                 //@synthesize isReachable=_isReachable - In the implementation block
@property (nonatomic,readonly) BOOL isOnWifi;                                    //@synthesize isOnWifi=_isOnWifi - In the implementation block
@property (nonatomic,retain) NSString * currentTestName;                         //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                  //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (assign,nonatomic) long long waitForGraphCount;                        //@synthesize waitForGraphCount=_waitForGraphCount - In the implementation block
@property (nonatomic,copy) NSSet * notificationSuppressionContexts;              //@synthesize notificationSuppressionContexts=_notificationSuppressionContexts - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)isReachable;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(NSSet *)notificationSuppressionContexts;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setNotificationSuppressionContexts:(NSSet *)arg1 ;
-(NSString *)currentTestName;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)photosPreferencesChanged;
-(void)dealloc;
-(NSDictionary *)currentTestOptions;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(BOOL)useCompatibleSuspensionAnimation;
-(void)prepareForApplicationWillEnterForeground;
-(void)prepareForApplicationDidEnterBackground;
-(void)prepareForApplicationDidBecomeActive;
-(void)_updateSuspensionSettings;
-(void)_cleanUpOutboundSharingAssets;
-(void)setReceivingRemoteControlEvents:(BOOL)arg1 ;
-(void)_startObservingReachabilityChanges;
-(void)_stopObservingReachabilityChanges;
-(void)enableNetworkObservation;
-(void)disableNetworkObservation;
-(void)_registerForPhotoStreamActivityNotifications;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(BOOL)isOnWifi;
-(long long)waitForGraphCount;
-(void)setWaitForGraphCount:(long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface ICSecurityInfo : NSObject {

	BOOL _hasLoadedDeviceClassCUnlocked;
	BOOL _isDeviceClassCUnlocked;
	BOOL _hasLoadedContentProtectionEnabled;
	BOOL _isContentProtectionEnabled;
	int _firstUnlockNotificationToken;
	NSMutableArray* _pendingFirstUnlockBlocks;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (getter=isContentProtectionEnabled,nonatomic,readonly) BOOL contentProtectionEnabled;              //@synthesize isContentProtectionEnabled=_isContentProtectionEnabled - In the implementation block
@property (getter=isDeviceUnlocked,nonatomic,readonly) BOOL deviceUnlocked; 
@property (getter=isDeviceClassCUnlocked,nonatomic,readonly) BOOL deviceClassCUnlocked;                      //@synthesize isDeviceClassCUnlocked=_isDeviceClassCUnlocked - In the implementation block
+(id)sharedSecurityInfo;
-(void)performBlockAfterFirstUnlock:(/*^block*/id)arg1 ;
-(BOOL)isDeviceUnlocked;
-(void)_processFirstUnlockNotification;
-(BOOL)isDeviceClassCUnlocked;
-(id)init;
-(void)_getContentProtectionEnabled:(BOOL*)arg1 isDeviceClassCUnlocked:(BOOL*)arg2 ;
-(BOOL)isContentProtectionEnabled;
-(void)_loadContentProtectionEnabled:(BOOL)arg1 isDeviceClassCUnlocked:(BOOL)arg2 ;
-(void)dealloc;
@end


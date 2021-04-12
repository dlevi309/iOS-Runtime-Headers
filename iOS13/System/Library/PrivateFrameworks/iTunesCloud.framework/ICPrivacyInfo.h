/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMedia; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMusic; 
+(id)sharedPrivacyInfo;
+(id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1 ;
+(BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(id)init;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMusic;
-(BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1 ;
-(BOOL)_privacyAcknowledgementRequiredForVideos;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(void)_updateForPrivacyAcknowledgementChanged;
-(BOOL)privacyAcknowledgementRequiredForMedia;
-(void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2 ;
@end


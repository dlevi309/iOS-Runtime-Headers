/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1 ;
+(id)sharedPrivacyInfo;
+(BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMusic;
-(id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_updateForPrivacyAcknowledgementChanged;
-(void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)privacyAcknowledgementRequiredForMedia;
-(BOOL)_privacyAcknowledgementRequiredForVideos;
-(BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1 ;
-(void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2 ;
@end


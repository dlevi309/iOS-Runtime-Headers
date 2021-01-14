/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/IAMApplicationContextProvider.h>

@class IAMPresentationPolicy, NSMutableSet, NSString;

@interface VUIInAppMessagingContextProvider : NSObject <IAMApplicationContextProvider> {

	IAMPresentationPolicy* _normalPolicy;
	IAMPresentationPolicy* _restrictedPolicy;
	NSMutableSet* _subscriptionProperties;

}

@property (nonatomic,retain) IAMPresentationPolicy * normalPolicy;                  //@synthesize normalPolicy=_normalPolicy - In the implementation block
@property (nonatomic,retain) IAMPresentationPolicy * restrictedPolicy;              //@synthesize restrictedPolicy=_restrictedPolicy - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscriptionProperties;                 //@synthesize subscriptionProperties=_subscriptionProperties - In the implementation block
@property (readonly) BOOL allowsModalMessageDisplay; 
@property (assign,nonatomic) double lastMessageDisplayTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)allowsModalMessageDisplay;
-(void)messageCoordinator:(id)arg1 didRequestAction:(id)arg2 ;
-(id)viewControllerForModalPresentation;
-(id)contextPropertyWithName:(id)arg1 ;
-(id)presentationPolicyForPolicyGroup:(long long)arg1 ;
-(id)_connectionType;
-(id)_locationStatus;
-(NSMutableSet *)subscriptionProperties;
-(BOOL)_hasItunesPurchases;
-(BOOL)_hasDownloads;
-(BOOL)_hasItunesDownloads;
-(BOOL)_hasSubscriptionDownloads;
-(id)_runSubscriptionQuery:(id)arg1 ;
-(IAMPresentationPolicy *)normalPolicy;
-(IAMPresentationPolicy *)restrictedPolicy;
-(id)_stringValueForKeyPath:(id)arg1 dictionary:(id)arg2 ;
-(id)queriedSubscriptionProperties;
-(void)setNormalPolicy:(IAMPresentationPolicy *)arg1 ;
-(void)setRestrictedPolicy:(IAMPresentationPolicy *)arg1 ;
-(void)setSubscriptionProperties:(NSMutableSet *)arg1 ;
@end


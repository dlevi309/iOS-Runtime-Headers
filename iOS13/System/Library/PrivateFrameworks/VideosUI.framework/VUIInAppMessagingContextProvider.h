/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL allowsModalMessageDisplay; 
@property (assign,nonatomic) double lastMessageDisplayTime; 
-(id)init;
-(id)viewControllerForModalPresentation;
-(BOOL)allowsModalMessageDisplay;
-(id)presentationPolicyForPolicyGroup:(long long)arg1 ;
-(id)contextPropertyWithName:(id)arg1 ;
-(NSMutableSet *)subscriptionProperties;
-(id)_runSubscriptionQuery:(id)arg1 ;
-(id)_stringValueForKeyPath:(id)arg1 dictionary:(id)arg2 ;
-(id)queriedSubscriptionProperties;
-(IAMPresentationPolicy *)normalPolicy;
-(void)setNormalPolicy:(IAMPresentationPolicy *)arg1 ;
-(IAMPresentationPolicy *)restrictedPolicy;
-(void)setRestrictedPolicy:(IAMPresentationPolicy *)arg1 ;
-(void)setSubscriptionProperties:(NSMutableSet *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDebugLayoutOptionsProviding.h>

@class NSHashTable, NSString;

@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {

	unsigned long long _viewingLocation;
	long long _bundleSubscriptionStatus;
	long long _channelSubscriptionStatus;
	unsigned long long _newsletterSubscriptionStatus;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long viewingLocation;                           //@synthesize viewingLocation=_viewingLocation - In the implementation block
@property (assign,nonatomic) long long bundleSubscriptionStatus;                           //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (assign,nonatomic) long long channelSubscriptionStatus;                          //@synthesize channelSubscriptionStatus=_channelSubscriptionStatus - In the implementation block
@property (assign,nonatomic) unsigned long long newsletterSubscriptionStatus;              //@synthesize newsletterSubscriptionStatus=_newsletterSubscriptionStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)notifyObservers;
-(long long)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(long long)arg1 ;
-(unsigned long long)newsletterSubscriptionStatus;
-(unsigned long long)overrideViewingLocation:(unsigned long long)arg1 ;
-(long long)overrideBundleSubscriptionStatus:(long long)arg1 ;
-(long long)overrideChannelSubscriptionStatus:(long long)arg1 ;
-(long long)overrideNewsletterSubscriptionStatus:(unsigned long long)arg1 ;
-(long long)channelSubscriptionStatus;
-(unsigned long long)viewingLocation;
-(void)setChannelSubscriptionStatus:(long long)arg1 ;
-(void)setViewingLocation:(unsigned long long)arg1 ;
-(void)setNewsletterSubscriptionStatus:(unsigned long long)arg1 ;
@end


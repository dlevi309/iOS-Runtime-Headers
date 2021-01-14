/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXSubscriptionStatusProviding.h>

@class NSString;

@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding> {

	long long _bundleSubscriptionStatus;
	long long _channelSubscriptionStatus;

}

@property (nonatomic,readonly) long long bundleSubscriptionStatus;               //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) long long channelSubscriptionStatus;              //@synthesize channelSubscriptionStatus=_channelSubscriptionStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(long long)bundleSubscriptionStatus;
-(long long)channelSubscriptionStatus;
-(id)initWithBundleSubscriptionStatus:(long long)arg1 channelSubscriptionStatus:(long long)arg2 ;
@end


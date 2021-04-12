/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, NSArray, NSOperationQueue;

@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	NSArray* _subscriptionsToAdd;
	NSArray* _subscriptionsToRemoveByBundleID;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                      //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToAdd;                           //@synthesize subscriptionsToAdd=_subscriptionsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToRemoveByBundleID;              //@synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID - In the implementation block
-(void)executionDidBegin;
-(id)init;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)cancel;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(NSArray *)subscriptionsToAdd;
-(NSArray *)subscriptionsToRemoveByBundleID;
-(id)_authorizedBundleIdsFromAppDescriptions:(id)arg1 ;
-(void)_removeSubscriptionsForBundleIdentifiers:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2 ;
-(void)_registerSubscriptions:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2 ;
-(void)setSubscriptionsToAdd:(NSArray *)arg1 ;
-(void)setSubscriptionsToRemoveByBundleID:(NSArray *)arg1 ;
@end


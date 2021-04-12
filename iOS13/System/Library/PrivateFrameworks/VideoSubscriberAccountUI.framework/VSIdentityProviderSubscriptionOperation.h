/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)cancel;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
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


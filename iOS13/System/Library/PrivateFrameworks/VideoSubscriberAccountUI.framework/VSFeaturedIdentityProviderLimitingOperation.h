/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSOptional, VSStoreURLBag;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation {

	NSArray* _unlimitedIdentityProviders;
	VSOptional* _result;
	VSStoreURLBag* _bag;

}

@property (nonatomic,retain) VSStoreURLBag * bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSArray * unlimitedIdentityProviders;              //@synthesize unlimitedIdentityProviders=_unlimitedIdentityProviders - In the implementation block
@property (nonatomic,retain) VSOptional * result;                             //@synthesize result=_result - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)executionDidBegin;
-(void)setUnlimitedIdentityProviders:(NSArray *)arg1 ;
-(NSArray *)unlimitedIdentityProviders;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(VSOptional *)result;
-(void)setUnlimitedIdentityProviders:(NSArray *)arg1 ;
-(NSArray *)unlimitedIdentityProviders;
@end


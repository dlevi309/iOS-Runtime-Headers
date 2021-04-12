/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/ASKResourceRequest.h>

@protocol ASKResourceDataConsumer, ASKImageRequestDelegate;
@class NSURLRequest;

@interface ASKImageRequest : ASKResourceRequest {

	id<ASKResourceDataConsumer> _dataConsumer;
	NSURLRequest* _urlRequest;
	id<ASKImageRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<ASKResourceDataConsumer> dataConsumer;                 //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest;                           //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) BOOL isResourceRequest; 
@property (nonatomic,__weak,readonly) id<ASKImageRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)searchBundles;
+(void)setSearchBundles:(id)arg1 ;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(BOOL)isSystemImageRequest;
-(id)init;
-(id<ASKImageRequestDelegate>)delegate;
-(NSURLRequest *)urlRequest;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(BOOL)isAvatarImageRequest;
-(BOOL)isResourceRequest;
-(id)description;
-(BOOL)isContactImageRequest;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3 ;
-(id<ASKResourceDataConsumer>)dataConsumer;
@end


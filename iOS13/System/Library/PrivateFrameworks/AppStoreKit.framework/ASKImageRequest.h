/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id<ASKImageRequestDelegate>)delegate;
-(id<ASKResourceDataConsumer>)dataConsumer;
-(NSURLRequest *)urlRequest;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(BOOL)isResourceRequest;
-(BOOL)isSystemImageRequest;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKResourceRequest.h>

@protocol GKResourceDataConsumer, GKImageRequestDelegate;
@class NSURLRequest;

@interface GKImageRequest : GKResourceRequest {

	id<GKResourceDataConsumer> _dataConsumer;
	NSURLRequest* _urlRequest;
	id<GKImageRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<GKResourceDataConsumer> dataConsumer;                 //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest;                          //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) BOOL isResourceRequest; 
@property (nonatomic,__weak,readonly) id<GKImageRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)searchBundles;
+(void)setSearchBundles:(id)arg1 ;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(BOOL)isSystemImageRequest;
-(id)init;
-(id<GKImageRequestDelegate>)delegate;
-(NSURLRequest *)urlRequest;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(BOOL)isAvatarImageRequest;
-(BOOL)isResourceRequest;
-(id)description;
-(BOOL)isContactImageRequest;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3 ;
-(id<GKResourceDataConsumer>)dataConsumer;
@end


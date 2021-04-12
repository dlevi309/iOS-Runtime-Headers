/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue, MPStoreSocialRequestOperationDataSource;
@class NSObject, ICStoreURLRequest;

@interface MPStoreSocialRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _request;
	id<MPStoreSocialRequestOperationDataSource> _dataSource;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) id<MPStoreSocialRequestOperationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                      //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)_urlStringForKey:(id)arg1 inBag:(id)arg2 ;
+(id)_stringRepresentationForHTTPBodyType:(long long)arg1 ;
+(id)_stringRepresentationForHTTPMethod:(long long)arg1 ;
-(void)execute;
-(id)_requestURLFromBagDictionary:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<MPStoreSocialRequestOperationDataSource>)dataSource;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)cancel;
@end


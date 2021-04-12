/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(id)initWithDataSource:(id)arg1 ;
-(id<MPStoreSocialRequestOperationDataSource>)dataSource;
-(id)_requestURLFromBagDictionary:(id)arg1 ;
@end


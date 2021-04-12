/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@protocol TKNetworkTask;
@class NSMutableURLRequest, NSError, TMLJSONObject, NSURL;

@interface TKCloudKitFetch : NSObject {

	id<TKNetworkTask> _queryTask;
	id<TKNetworkTask> _downloadTask;
	BOOL _active;
	BOOL _cancelled;
	NSMutableURLRequest* _urlRequest;
	NSError* _error;
	TMLJSONObject* _response;
	NSURL* _downloadURL;

}

@property (nonatomic,retain) NSURL * downloadURL;                           //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) TMLJSONObject * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)cancelled;
-(BOOL)active;
-(NSURL *)downloadURL;
-(id)init;
-(NSMutableURLRequest *)urlRequest;
-(NSError *)error;
-(TMLJSONObject *)response;
-(void)setResponse:(TMLJSONObject *)arg1 ;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(void)send;
-(void)cancel;
-(void)dealloc;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)tmlDispose;
-(void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3 ;
-(void)downloadAssetFromCloudKit;
-(void)handleDownloadResponse:(id)arg1 error:(id)arg2 ;
@end


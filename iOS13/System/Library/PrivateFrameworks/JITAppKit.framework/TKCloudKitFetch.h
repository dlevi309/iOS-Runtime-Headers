/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)cancel;
-(BOOL)cancelled;
-(TMLJSONObject *)response;
-(void)setResponse:(TMLJSONObject *)arg1 ;
-(void)send;
-(BOOL)active;
-(NSURL *)downloadURL;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSMutableURLRequest *)urlRequest;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)tmlDispose;
-(void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3 ;
-(void)downloadAssetFromCloudKit;
-(void)handleDownloadResponse:(id)arg1 error:(id)arg2 ;
@end


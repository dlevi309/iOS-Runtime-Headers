/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequest.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>

@protocol PHMediaRequestDelegate;
@class PHAssetResourceRequest, NSMutableData, PHMediaResourceResult, PHAssetResource, NSString;

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate> {

	BOOL _networkAccessAllowed;
	BOOL _synchronous;
	PHAssetResourceRequest* _internalRequest;
	NSMutableData* _compositeData;
	PHMediaResourceResult* _dataResult;
	BOOL _wantsURLOnly;
	id<PHMediaRequestDelegate> _delegate;
	/*^block*/id _progressHandler;
	PHAssetResource* _resource;

}

@property (assign,nonatomic,__weak) id<PHMediaRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) PHAssetResource * resource;                            //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) long long resourceType; 
@property (nonatomic,readonly) BOOL wantsURLOnly;                                     //@synthesize wantsURLOnly=_wantsURLOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<PHMediaRequestDelegate>)delegate;
-(void)setDelegate:(id<PHMediaRequestDelegate>)arg1 ;
-(void)cancel;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(long long)resourceType;
-(PHAssetResource *)resource;
-(BOOL)isSynchronous;
-(void)startRequest;
-(void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequestDidFinish:(id)arg1 ;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 assetResource:(id)arg6 networkAccessAllowed:(BOOL)arg7 wantsURLOnly:(BOOL)arg8 synchronous:(BOOL)arg9 delegate:(id)arg10 ;
-(void)_reportProgress:(double)arg1 ;
-(void)_receiveAssetResourceDataPart:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(BOOL)wantsURLOnly;
@end


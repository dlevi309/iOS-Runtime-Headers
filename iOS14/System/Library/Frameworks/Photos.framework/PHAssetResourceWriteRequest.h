/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>
#import <libobjc.A.dylib/PHAssetResourceRequest.h>

@protocol PHAssetResourceRequestDelegate;
@class PHAssetResource, PHAssetResourceRequestOptions, NSDictionary, NSString, PHAssetResourceRequest, NSError, NSURL;

@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequestDelegate, PHAssetResourceRequest> {

	PHAssetResourceRequest* _dataRequest;
	NSError* _error;
	os_unfair_lock_s _completionHandlerLock;
	int _requestID;
	PHAssetResource* _assetResource;
	PHAssetResourceRequestOptions* _options;
	unsigned long long _managerID;
	id<PHAssetResourceRequestDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSDictionary* _info;
	NSString* _taskIdentifier;
	NSURL* _destinationFileURL;

}

@property (nonatomic,readonly) NSURL * destinationFileURL;                                      //@synthesize destinationFileURL=_destinationFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAssetResource * assetResource;                                 //@synthesize assetResource=_assetResource - In the implementation block
@property (nonatomic,readonly) PHAssetResourceRequestOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int requestID;                                                   //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                    //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,__weak,readonly) id<PHAssetResourceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * taskIdentifier;                                           //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(void)startRequest;
-(NSDictionary *)info;
-(id<PHAssetResourceRequestDelegate>)delegate;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(PHAssetResourceRequestOptions *)options;
-(id)completionHandler;
-(int)requestID;
-(void)setErrorIfNone:(id)arg1 ;
-(NSString *)taskIdentifier;
-(NSURL *)destinationFileURL;
-(PHAssetResource *)assetResource;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAssetResource:(id)arg1 destinationFileURL:(id)arg2 options:(id)arg3 requestID:(int)arg4 managerID:(unsigned long long)arg5 delegate:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)cancel;
-(BOOL)isCancelled;
-(unsigned long long)managerID;
@end


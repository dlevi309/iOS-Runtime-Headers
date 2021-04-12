/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLTrackableRequestDelegate.h>
#import <libobjc.A.dylib/PHAssetResourceRequest.h>

@protocol PHAssetResourceRequestDelegate;
@class PHResourceAvailabilityJob, NSProgress, PHAssetResource, PHAssetResourceRequestOptions, NSDictionary, NSString;

@interface PHAssetResourceRequest : NSObject <PLTrackableRequestDelegate, PHAssetResourceRequest> {

	PHResourceAvailabilityJob* _availabilityJob;
	os_unfair_lock_s _lock;
	BOOL _cancelled;
	NSProgress* _availabilityProgress;
	NSProgress* _fileStreamProgress;
	NSProgress* _totalProgress;
	BOOL _loadURLOnly;
	BOOL _synchronous;
	int _requestID;
	PHAssetResource* _assetResource;
	PHAssetResourceRequestOptions* _options;
	unsigned long long _managerID;
	id<PHAssetResourceRequestDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSDictionary* _info;
	NSString* _taskIdentifier;
	/*^block*/id _dataHandler;

}

@property (nonatomic,copy) id dataHandler;                                                      //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL loadURLOnly;                                                  //@synthesize loadURLOnly=_loadURLOnly - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                             //@synthesize synchronous=_synchronous - In the implementation block
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
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * taskIdentifier;                                           //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
+(id)_globalFileIOQueue;
-(PHAssetResourceRequestOptions *)options;
-(id<PHAssetResourceRequestDelegate>)delegate;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setSynchronous:(BOOL)arg1 ;
-(NSDictionary *)info;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(int)requestID;
-(unsigned long long)managerID;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)trackableRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)trackableResourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)trackableDownloadRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)trackableVideoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(BOOL)isSynchronous;
-(void)startRequest;
-(void)_setupProgressIfNeeded;
-(PHAssetResource *)assetResource;
-(id)initWithAssetResource:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(unsigned long long)arg4 delegate:(id)arg5 dataReceivedHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_initialValidationError;
-(void)_reportProgress;
-(void)_finishWithFileURL:(id)arg1 ;
-(void)_finishAsyncWithFileURL:(id)arg1 ;
-(void)_streamDataAtURL:(id)arg1 dataHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateAssetResourceWithLocallyAvailable:(BOOL)arg1 fileURL:(id)arg2 ;
-(BOOL)loadURLOnly;
-(void)setLoadURLOnly:(BOOL)arg1 ;
@end


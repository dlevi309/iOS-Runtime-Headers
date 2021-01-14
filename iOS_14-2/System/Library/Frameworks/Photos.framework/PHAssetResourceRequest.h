/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequest.h>

@protocol PHAssetResourceRequestDelegate;
@class NSProgress, PLProgressFollower, PHAssetResource, PHAssetResourceRequestOptions, NSDictionary, NSString;

@interface PHAssetResourceRequest : NSObject <PHAssetResourceRequest> {

	os_unfair_lock_s _lock;
	BOOL _cancelled;
	NSProgress* _availabilityProgress;
	long long _availabilityPendingCount;
	NSProgress* _fileStreamProgress;
	long long _fileStreamPendingCount;
	NSProgress* _totalProgress;
	PLProgressFollower* _progressFollower;
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
@property (nonatomic,readonly) PHAssetResource * assetResource;                                 //@synthesize assetResource=_assetResource - In the implementation block
@property (nonatomic,readonly) PHAssetResourceRequestOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int requestID;                                                   //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                    //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,__weak,readonly) id<PHAssetResourceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * info;                                             //@synthesize info=_info - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * taskIdentifier;                                           //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_globalFileIOQueue;
-(void)startRequest;
-(NSDictionary *)info;
-(void)setCompletionHandler:(id)arg1 ;
-(id<PHAssetResourceRequestDelegate>)delegate;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(PHAssetResourceRequestOptions *)options;
-(BOOL)isSynchronous;
-(id)dataHandler;
-(id)completionHandler;
-(void)setDataHandler:(id)arg1 ;
-(int)requestID;
-(NSString *)taskIdentifier;
-(void)setSynchronous:(BOOL)arg1 ;
-(BOOL)loadURLOnly;
-(id)initWithAssetResource:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(unsigned long long)arg4 delegate:(id)arg5 dataReceivedHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_initialValidationError;
-(void)_setupTotalProgressIfNeeded;
-(void)_addAvailabilityProgressIfNeeded:(id)arg1 ;
-(void)_setupFilestreamProgressIfNeeded;
-(void)_finishWithFileURL:(id)arg1 error:(id)arg2 ;
-(void)_finishAsyncWithFileURL:(id)arg1 error:(id)arg2 ;
-(long long)_streamDataAtURL:(id)arg1 error:(id*)arg2 dataHandler:(/*^block*/id)arg3 ;
-(void)_updateAssetResourceWithLocallyAvailable:(BOOL)arg1 fileURL:(id)arg2 ;
-(void)setLoadURLOnly:(BOOL)arg1 ;
-(PHAssetResource *)assetResource;
-(void)cancel;
-(BOOL)isCancelled;
-(unsigned long long)managerID;
@end


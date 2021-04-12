/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLTrackableRequestDelegate.h>
#import <libobjc.A.dylib/PHImageRequestDelegate.h>
#import <libobjc.A.dylib/PHVideoRequestDelegate.h>
#import <libobjc.A.dylib/PHAdjustmentDataRequestDelegate.h>
#import <libobjc.A.dylib/PHResourceRepairRequestDelegate.h>

@protocol PHMediaRequestContextDelegate;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, PHAsset, PHImageDisplaySpec, PHImageResourceChooser, NSString;

@interface PHMediaRequestContext : NSObject <PLTrackableRequestDelegate, PHImageRequestDelegate, PHVideoRequestDelegate, PHAdjustmentDataRequestDelegate, PHResourceRepairRequestDelegate> {

	/*^block*/id _resultHandler;
	AQ _nextID;
	Ai _repairAttemptCount;
	os_unfair_lock_s _lock;
	NSMutableArray* _requests;
	NSMutableArray* _jobs;
	NSMutableDictionary* _requestedResourcesByTaskIdentifier;
	NSMutableSet* _inflightRequestIdentifiers;
	BOOL _isCancelled;
	NSMutableDictionary* _progressByTaskIdentifier;
	NSProgress* _totalProgress;
	int _requestID;
	id<PHMediaRequestContextDelegate> _delegate;
	unsigned long long _signpostID;
	unsigned long long _signpostLayoutID;
	unsigned long long _managerID;
	PHAsset* _asset;
	PHImageDisplaySpec* _displaySpec;
	PHImageResourceChooser* _imageResourceChooser;

}

@property (nonatomic,retain) PHImageResourceChooser * imageResourceChooser;                  //@synthesize imageResourceChooser=_imageResourceChooser - In the implementation block
@property (nonatomic,retain) PHImageDisplaySpec * displaySpec;                               //@synthesize displaySpec=_displaySpec - In the implementation block
@property (assign,nonatomic,__weak) id<PHMediaRequestContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                                  //@synthesize signpostID=_signpostID - In the implementation block
@property (assign,nonatomic) unsigned long long signpostLayoutID;                            //@synthesize signpostLayoutID=_signpostLayoutID - In the implementation block
@property (nonatomic,readonly) int requestID;                                                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) unsigned long long managerID;                                 //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                                              //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 intent:(long long)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)contentEditingInputRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)chooserQueue;
-(long long)type;
-(id<PHMediaRequestContextDelegate>)delegate;
-(void)setDelegate:(id<PHMediaRequestContextDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(PHAsset *)asset;
-(/*^block*/id)progressHandler;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(int)requestID;
-(unsigned long long)managerID;
-(BOOL)isNetworkAccessAllowed;
-(void)trackableRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)trackableResourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)trackableDownloadRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)trackableVideoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(BOOL)isSynchronous;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(PHImageDisplaySpec *)displaySpec;
-(void)setDisplaySpec:(PHImageDisplaySpec *)arg1 ;
-(void)resourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)mediaRequest:(id)arg1 didFindLocallyAvailableResult:(BOOL)arg2 isDegraded:(BOOL)arg3 ;
-(BOOL)mediaRequest:(id)arg1 didStartLocalAvailabilityChangeRequestForResource:(id)arg2 ;
-(void)mediaRequest:(id)arg1 didFinishWithResult:(id)arg2 ;
-(BOOL)videoRequest:(id)arg1 didStartVideoChoosingRequestForSize:(CGSize)arg2 ;
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)imageRequest:(id)arg1 isRequestingRepairAndRetryForDataStoreKey:(id)arg2 inStore:(id)arg3 assetObjectID:(id)arg4 forValidationErrors:(id)arg5 ;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_requestWithIdentifier:(id)arg1 ;
-(void)_registerAndStartRequests:(id)arg1 ;
-(void)_setupProgressIfNeeded;
-(BOOL)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2 ;
-(unsigned long long)nextRequestIndex;
-(double)totalProgressFraction;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(id)_produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 ;
-(id)_produceChildRequestsForRequest:(id)arg1 withResult:(id)arg2 ;
-(BOOL)shouldReportProgress;
-(void)setProgress:(id)arg1 forRequestIdentifier:(id)arg2 ;
-(void)requestWithIdentifier:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(PHImageResourceChooser *)imageResourceChooser;
-(BOOL)representsShareableHighQualityResource;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2 ;
-(unsigned long long)signpostLayoutID;
-(void)setSignpostLayoutID:(unsigned long long)arg1 ;
-(void)setImageResourceChooser:(PHImageResourceChooser *)arg1 ;
@end


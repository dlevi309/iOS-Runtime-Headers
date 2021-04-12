/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHImageRequestDelegate.h>
#import <libobjc.A.dylib/PHAdjustmentDataRequestDelegate.h>

@protocol PHMediaRequestContextDelegate;
@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSProgress, PHAsset, PHImageDisplaySpec, PHImageResourceChooser, NSString;

@interface PHMediaRequestContext : NSObject <PHImageRequestDelegate, PHAdjustmentDataRequestDelegate> {

	/*^block*/id _resultHandler;
	AQ _nextID;
	Ai _repairAttemptCount;
	os_unfair_lock_s _lock;
	NSMutableArray* _requests;
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
+(id)chooserQueue;
+(id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 intent:(long long)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)contentEditingInputRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(id<PHMediaRequestContextDelegate>)delegate;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(void)start;
-(PHAsset *)asset;
-(BOOL)isSynchronous;
-(int)requestID;
-(id)progresses;
-(void)setDelegate:(id<PHMediaRequestContextDelegate>)arg1 ;
-(id)initialRequests;
-(void)setDisplaySpec:(PHImageDisplaySpec *)arg1 ;
-(long long)type;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)isNetworkAccessAllowed;
-(void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)mediaRequest:(id)arg1 didRequestRetryWithHintsAllowed:(BOOL)arg2 ;
-(void)mediaRequest:(id)arg1 didFindLocallyAvailableResult:(BOOL)arg2 isDegraded:(BOOL)arg3 ;
-(void)mediaRequest:(id)arg1 didReportProgress:(id)arg2 ;
-(void)mediaRequest:(id)arg1 didFinishWithResult:(id)arg2 ;
-(unsigned long long)nextRequestIndex;
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)imageRequestCanRequestRepair:(id)arg1 ;
-(id)_requestWithIdentifier:(id)arg1 ;
-(double)totalProgressFraction;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_registerAndStartRequests:(id)arg1 ;
-(void)_setupProgressIfNeeded;
-(void)beginCustomAsyncWorkWithIdentifier:(id)arg1 ;
-(void)finishCustomAsyncWorkWithIdentifier:(id)arg1 ;
-(id)_produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 ;
-(id)_produceChildRequestsForRequest:(id)arg1 withResult:(id)arg2 ;
-(void)setProgress:(id)arg1 forRequestIdentifier:(id)arg2 ;
-(PHImageResourceChooser *)imageResourceChooser;
-(unsigned long long)signpostLayoutID;
-(void)requestWithIdentifier:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)setSignpostLayoutID:(unsigned long long)arg1 ;
-(void)setImageResourceChooser:(PHImageResourceChooser *)arg1 ;
-(BOOL)shouldReportProgress;
-(/*^block*/id)progressHandler;
-(void)cancel;
-(BOOL)isCancelled;
-(unsigned long long)managerID;
-(PHImageDisplaySpec *)displaySpec;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions> {

	BOOL _networkAccessAllowed;
	BOOL _shouldForceOriginalChoice;
	BOOL _dontAllowRAW;
	BOOL _forceRunAsUnadjustedAsset;
	BOOL _forceReturnFullLivePhoto;
	BOOL _forcePrepareCurrentBaseVersionInAddition;
	BOOL _editAsOvercapture;
	BOOL _loadResourcesToFlip;
	BOOL _skipDisplaySizeImage;
	BOOL _skipLivePhotoImageAndAVAsset;
	/*^block*/id _canHandleAdjustmentData;
	/*^block*/id _progressHandler;
	long long _contentMode;
	/*^block*/id _canHandleRAW;
	unsigned long long _originalChoice;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	CGSize _targetSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldForceOriginalChoice;                                       //@synthesize shouldForceOriginalChoice=_shouldForceOriginalChoice - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                    //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                                                    //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (nonatomic,copy) id canHandleRAW;                                                        //@synthesize canHandleRAW=_canHandleRAW - In the implementation block
@property (assign,nonatomic) unsigned long long originalChoice;                                    //@synthesize originalChoice=_originalChoice - In the implementation block
@property (assign,nonatomic) BOOL forceRunAsUnadjustedAsset;                                       //@synthesize forceRunAsUnadjustedAsset=_forceRunAsUnadjustedAsset - In the implementation block
@property (assign,nonatomic) BOOL forceReturnFullLivePhoto;                                        //@synthesize forceReturnFullLivePhoto=_forceReturnFullLivePhoto - In the implementation block
@property (assign,nonatomic) BOOL forcePrepareCurrentBaseVersionInAddition;                        //@synthesize forcePrepareCurrentBaseVersionInAddition=_forcePrepareCurrentBaseVersionInAddition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                      //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (assign,nonatomic) BOOL editAsOvercapture;                                               //@synthesize editAsOvercapture=_editAsOvercapture - In the implementation block
@property (assign,nonatomic) BOOL loadResourcesToFlip;                                             //@synthesize loadResourcesToFlip=_loadResourcesToFlip - In the implementation block
@property (assign,nonatomic) BOOL skipDisplaySizeImage;                                            //@synthesize skipDisplaySizeImage=_skipDisplaySizeImage - In the implementation block
@property (assign,nonatomic) BOOL skipLivePhotoImageAndAVAsset;                                    //@synthesize skipLivePhotoImageAndAVAsset=_skipLivePhotoImageAndAVAsset - In the implementation block
@property (nonatomic,copy) id canHandleAdjustmentData;                                             //@synthesize canHandleAdjustmentData=_canHandleAdjustmentData - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(CGSize)targetSize;
-(long long)contentMode;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSynchronous;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(id)canHandleAdjustmentData;
-(BOOL)dontAllowRAW;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(id)progressHandler;
-(void)setContentMode:(long long)arg1 ;
-(void)setOriginalChoice:(unsigned long long)arg1 ;
-(void)setCanHandleAdjustmentData:(id)arg1 ;
-(id)canHandleRAW;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldForceOriginalChoice;
-(void)setShouldForceOriginalChoice:(BOOL)arg1 ;
-(void)setCanHandleRAW:(id)arg1 ;
-(unsigned long long)originalChoice;
-(BOOL)forceRunAsUnadjustedAsset;
-(void)setForceRunAsUnadjustedAsset:(BOOL)arg1 ;
-(BOOL)forceReturnFullLivePhoto;
-(BOOL)editAsOvercapture;
-(void)setForceReturnFullLivePhoto:(BOOL)arg1 ;
-(BOOL)forcePrepareCurrentBaseVersionInAddition;
-(void)setForcePrepareCurrentBaseVersionInAddition:(BOOL)arg1 ;
-(void)setEditAsOvercapture:(BOOL)arg1 ;
-(BOOL)loadResourcesToFlip;
-(void)setLoadResourcesToFlip:(BOOL)arg1 ;
-(BOOL)skipDisplaySizeImage;
-(void)setSkipDisplaySizeImage:(BOOL)arg1 ;
-(BOOL)skipLivePhotoImageAndAVAsset;
-(void)setSkipLivePhotoImageAndAVAsset:(BOOL)arg1 ;
@end


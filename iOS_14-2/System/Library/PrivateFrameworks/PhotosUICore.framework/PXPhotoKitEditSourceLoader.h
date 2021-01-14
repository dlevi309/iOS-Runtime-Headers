/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXEditSourceLoader.h>

@protocol OS_dispatch_queue;
@class NSDate, NSProgress, NSObject, PLEditSource, PICompositionController, NSError, NSNumber, NSString, PHAsset;

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader> {

	unsigned long long _loadingQueue_imageRequestID;
	NSDate* _mainQueue_loadingStartDate;
	NSProgress* _editSourceCreationProgress;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	BOOL _overcaptureSourceIsActive;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	PICompositionController* _compositionController;
	PICompositionController* _originalCompositionController;
	NSProgress* _progress;
	NSError* _error;
	long long _baseVersion;
	NSNumber* _loadDuration;
	NSString* _livePhotoPairingIdentifier;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                                                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) PLEditSource * editSource;                                                 //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource;                                      //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) PICompositionController * compositionController;                      //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * originalCompositionController;              //@synthesize originalCompositionController=_originalCompositionController - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;                                //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) long long baseVersion;                                                     //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSNumber * loadDuration;                                                   //@synthesize loadDuration=_loadDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(PHAsset *)asset;
-(PLEditSource *)activeEditSource;
-(PICompositionController *)originalCompositionController;
-(NSNumber *)loadDuration;
-(void)_handleCancellation;
-(void)_resetProgress;
-(void)_cancelContentInputRequest;
-(void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3 ;
-(void)_mainQueue_handleEditSource:(id)arg1 overCaptureEditSource:(id)arg2 compositionController:(id)arg3 originalCompositionController:(id)arg4 overCaptureEditSourceIsActive:(BOOL)arg5 error:(id)arg6 ;
-(NSString *)contentIdentifier;
-(NSError *)error;
-(NSString *)livePhotoPairingIdentifier;
-(id)initWithAsset:(id)arg1 ;
-(void)beginLoading;
-(long long)baseVersion;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
@end


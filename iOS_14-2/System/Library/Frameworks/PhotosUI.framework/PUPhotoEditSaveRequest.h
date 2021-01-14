/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSProgress, PHAsset, PICompositionController, NUComposition, PUPhotoEditIrisModel, PHContentEditingOutput;

@interface PUPhotoEditSaveRequest : NSObject {

	/*^block*/id _completionHandler;
	double _beginTimestamp;
	BOOL _useRawIfAvailable;
	NSProgress* _videoExportProgress;
	int _identifier;
	PHAsset* _photo;
	PICompositionController* _compositionController;
	NUComposition* _originalComposition;
	PUPhotoEditIrisModel* _irisModel;
	PHContentEditingOutput* _contentEditingOutput;
	long long _workImageVersion;
	long long _currentState;

}

@property (nonatomic,readonly) int identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PHAsset * photo;                                                   //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,readonly) NUComposition * originalComposition;                               //@synthesize originalComposition=_originalComposition - In the implementation block
@property (nonatomic,copy,readonly) PUPhotoEditIrisModel * irisModel;                             //@synthesize irisModel=_irisModel - In the implementation block
@property (nonatomic,readonly) PHContentEditingOutput * contentEditingOutput;                     //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (nonatomic,readonly) long long workImageVersion;                                        //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (nonatomic,readonly) long long currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) BOOL supportsProgress; 
@property (nonatomic,readonly) double progress; 
-(PHAsset *)photo;
-(double)progress;
-(id)init;
-(long long)currentState;
-(PHContentEditingOutput *)contentEditingOutput;
-(PUPhotoEditIrisModel *)irisModel;
-(NUComposition *)originalComposition;
-(id)initWithPhotoToRevertToOriginal:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(BOOL)arg5 ;
-(long long)_imageRequestVersion;
-(id)initWithPhoto:(id)arg1 compositionController:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(BOOL)arg7 ;
-(void)beginSaveOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_videoRequestVersion;
-(void)cancelSaveOperation;
-(void)_performSaveEditsOperation;
-(void)_performSaveContentEditingOutput;
-(void)_performRevertToOriginalOperation;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_requiresVideoRender;
-(BOOL)supportsProgress;
-(long long)workImageVersion;
-(int)identifier;
-(PICompositionController *)compositionController;
-(void)_transitionToState:(long long)arg1 ;
@end


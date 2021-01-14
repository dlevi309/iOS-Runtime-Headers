/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXRunNodeDelegate.h>

@protocol PUEditableAsset;
@class PUReviewCreateAssetNode, PUVideoExportNode, PUEditableMediaProvider, NSURL, PICompositionController, PUPhotoEditIrisModel, PHContentEditingOutput, NSString;

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate> {

	/*^block*/id _completionHandler;
	double _beginTimestamp;
	PUReviewCreateAssetNode* _outputNode;
	PUVideoExportNode* _videoExportNode;
	int _identifier;
	id<PUEditableAsset> _editableAsset;
	PUEditableMediaProvider* _editableMediaProvider;
	NSURL* _directory;
	PICompositionController* _compositionController;
	PUPhotoEditIrisModel* _irisModel;
	PHContentEditingOutput* _contentEditingOutput;
	long long _workImageVersion;
	long long _currentState;

}

@property (nonatomic,readonly) int identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> editableAsset;                                 //@synthesize editableAsset=_editableAsset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * editableMediaProvider;                   //@synthesize editableMediaProvider=_editableMediaProvider - In the implementation block
@property (nonatomic,readonly) NSURL * directory;                                                 //@synthesize directory=_directory - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,copy,readonly) PUPhotoEditIrisModel * irisModel;                             //@synthesize irisModel=_irisModel - In the implementation block
@property (nonatomic,readonly) PHContentEditingOutput * contentEditingOutput;                     //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (nonatomic,readonly) long long workImageVersion;                                        //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (nonatomic,readonly) long long currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) BOOL supportsProgress; 
@property (nonatomic,readonly) double progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)progress;
-(id)init;
-(NSURL *)directory;
-(long long)currentState;
-(PHContentEditingOutput *)contentEditingOutput;
-(id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6 ;
-(id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6 ;
-(PUPhotoEditIrisModel *)irisModel;
-(void)_performInternalSaveOperation;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7 ;
-(void)_performSaveOperation;
-(void)_handleOutputNodeFinishedWithError:(id)arg1 ;
-(void)_finishWithAsset:(id)arg1 error:(id)arg2 ;
-(id<PUEditableAsset>)editableAsset;
-(PUEditableMediaProvider *)editableMediaProvider;
-(long long)_imageRequestVersion;
-(void)beginSaveOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_videoRequestVersion;
-(void)cancelSaveOperation;
-(BOOL)_requiresVideoRender;
-(BOOL)supportsProgress;
-(long long)workImageVersion;
-(void)runNode:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)runNode:(id)arg1 didCancelWithError:(id)arg2 ;
-(int)identifier;
-(PICompositionController *)compositionController;
-(void)_transitionToState:(long long)arg1 ;
@end


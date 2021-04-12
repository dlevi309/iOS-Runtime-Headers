/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUVideoURLExportNode.h>

@protocol PUVideoURLNode, PUImageInfoNode;
@class PICompositionController, NSString, NSURL, NSProgress, NSArray;

@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode> {

	id<PUVideoURLNode> _videoURLNode;
	id<PUImageInfoNode> _imageInfoNode;
	unsigned long long _quality;
	PICompositionController* _compositionController;
	NSString* _livePhotoPairingIdentifier;
	NSURL* _videoURL;
	NSProgress* _exportProgress;
	CGSize _renderedVideoSize;

}

@property (nonatomic,retain) NSURL * videoURL;                                                    //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSProgress * exportProgress;                                         //@synthesize exportProgress=_exportProgress - In the implementation block
@property (nonatomic,readonly) id<PUVideoURLNode> videoURLNode;                                   //@synthesize videoURLNode=_videoURLNode - In the implementation block
@property (nonatomic,readonly) id<PUImageInfoNode> imageInfoNode;                                 //@synthesize imageInfoNode=_imageInfoNode - In the implementation block
@property (nonatomic,readonly) unsigned long long quality;                                        //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (nonatomic,copy,readonly) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;                        //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) CGSize renderedVideoSize;                                          //@synthesize renderedVideoSize=_renderedVideoSize - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(double)progress;
-(void)didCancel;
-(void)setVideoURL:(NSURL *)arg1 ;
-(id<PUImageInfoNode>)imageInfoNode;
-(CGSize)renderedVideoSize;
-(unsigned long long)quality;
-(id)initWithVideoURLNode:(id)arg1 imageURLNode:(id)arg2 quality:(unsigned long long)arg3 livePhotoPairingIdentifier:(id)arg4 compositionController:(id)arg5 ;
-(id<PUVideoURLNode>)videoURLNode;
-(NSString *)livePhotoPairingIdentifier;
-(NSURL *)videoURL;
-(id)_newOutputURL;
-(NSProgress *)exportProgress;
-(id)_exportPresetName;
-(void)_handleExportCompletedWithSuccess:(BOOL)arg1 editedSize:(CGSize)arg2 error:(id)arg3 ;
-(void)setExportProgress:(NSProgress *)arg1 ;
-(id)_editSource;
-(PICompositionController *)compositionController;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoProcessingOperation.h>

@class PLPhotoEditRenderer, PIVideoStabilizeRequest, NUImagePropertiesRequest, PXVideoStabilizeOperationSpec;

@interface PXVideoStabilizeOperation : PXVideoProcessingOperation {

	PLPhotoEditRenderer* _renderer;
	PIVideoStabilizeRequest* _stabilizeRequest;
	NUImagePropertiesRequest* _imagePropertiesRequest;

}

@property (nonatomic,readonly) id<PXVideoStabilizeResult> result; 
@property (nonatomic,readonly) PXVideoStabilizeOperationSpec * spec; 
-(id)initWithSpec:(id)arg1 ;
-(void)cancel;
-(id)performProcessing;
@end


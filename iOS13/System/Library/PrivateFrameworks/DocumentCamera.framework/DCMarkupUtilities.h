/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@interface DCMarkupUtilities : NSObject
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(id)createMarkupViewController;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(BOOL)arg3 ;
+(id)createProcessingMarkupViewControllerOutWindow:(id*)arg1 ;
+(id)markupModelDataFromDataAtURL:(id)arg1 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2 ;
+(id)markupModelDataFromData:(id)arg1 ;
+(id)dataToEditForDocumentInfo:(id)arg1 includeMarkupModelData:(BOOL)arg2 imageCache:(id)arg3 embedMarkupModelDataInImage:(BOOL)arg4 ;
+(id)dataToEditForDocumentInfo:(id)arg1 imageCache:(id)arg2 includeMarkupModelData:(BOOL)arg3 ;
+(void)applyMarkupModelData:(id)arg1 documentInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)applyReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)extractReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end


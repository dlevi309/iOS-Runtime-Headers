/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMPreviewGeneratorProtocol
@required
+(double)maxUpScale;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3;
+(CGSize*)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3;
+(BOOL)writesToDisk;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 outSize:(CGSize*)arg3 error:(id*)arg4;
+(id)previewExtension;
+(BOOL)shouldScaleUpPreview;
+(BOOL)shouldShadePreview;

@end


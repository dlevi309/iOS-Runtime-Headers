/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICMarkupUtilities : NSObject
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(id)createMarkupViewController;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(BOOL)arg3 ;
+(id)createProcessingMarkupViewControllerOutWindow:(id*)arg1 ;
+(void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)markupModelDataFromDataAtURL:(id)arg1 ;
+(void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2 ;
+(void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)markupModelDataFromData:(id)arg1 ;
@end


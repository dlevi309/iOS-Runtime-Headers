/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKLegacyDrawingRegressionTester : NSObject
+(double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 debugImagesDirectory:(id)arg3 ;
+(CGImageRef)createFilteredImageFromImage:(id)arg1 context:(id)arg2 filterRadius:(double)arg3 ;
+(double)maxStdDevErrorFromResult:(SCD_Struct_PK74*)arg1 ;
+(double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 ;
+(double)compareImage:(CGImageRef)arg1 with:(CGImageRef)arg2 drawing:(id)arg3 ;
+(id)regressionTestDrawingPathForFile:(id)arg1 forClass:(Class)arg2 ;
+(id)regressionTestImagePathForFile:(id)arg1 forClass:(Class)arg2 ;
@end


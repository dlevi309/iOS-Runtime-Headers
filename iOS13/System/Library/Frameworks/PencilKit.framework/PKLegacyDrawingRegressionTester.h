/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKLegacyDrawingRegressionTester : NSObject
+(double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 debugImagesDirectory:(id)arg3 ;
+(CGImageRef)createFilteredImageFromImage:(id)arg1 context:(id)arg2 filterRadius:(double)arg3 ;
+(double)maxStdDevErrorFromResult:(SCD_Struct_PK66*)arg1 ;
+(double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 ;
+(double)compareImage:(CGImageRef)arg1 with:(CGImageRef)arg2 drawing:(id)arg3 ;
+(id)regressionTestDrawingPathForFile:(id)arg1 forClass:(Class)arg2 ;
+(id)regressionTestImagePathForFile:(id)arg1 forClass:(Class)arg2 ;
@end


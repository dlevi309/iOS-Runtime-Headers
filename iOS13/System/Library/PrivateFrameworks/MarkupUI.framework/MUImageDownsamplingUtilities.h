/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageDownsamplingUtilities : NSObject
+(id)_uniqueTemporaryDirectory;
+(id)_preferredFileExtensionForContentType:(id)arg1 ;
+(void)_shouldFlattenEXIFOrientation:(BOOL*)arg1 andDownsample:(BOOL*)arg2 sourceContent:(id)arg3 ;
+(id)_flattenRotation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceImage:(id)arg3 ;
+(id)_sourceContentType:(id)arg1 ;
+(id)_flattenEXIFOrientation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceContent:(id)arg3 withUTI:(id)arg4 ;
+(id)_preferredFileDisplayNameForSourceContent:(id)arg1 ;
+(CGImageSourceRef)_newImageSourceWithSourceContent:(id)arg1 ;
+(double)_maxDimensionOfSize:(CGSize)arg1 fittingToArea:(double)arg2 ;
+(CGSize)_sizeFittingArea:(double)arg1 withSize:(CGSize)arg2 ;
+(BOOL)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLThumbnailUtilities : NSObject
+(BOOL)performSWCascadingDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 ;
+(BOOL)performHWCascadingDownscaleTo5551OnIOSurface:(IOSurfaceRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 usingContext:(id)arg4 ;
+(int)_bytesPerRowForWidthInPixels:(int)arg1 ;
+(int)_requiredDataLengthForSpecification:(id)arg1 ;
+(id)_destinationDataFromSpecification:(id)arg1 ;
+(id)_destinationDataArrayFromSpecifications:(id)arg1 ;
+(BOOL)_validateSpecification:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_validateSpecifications:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_performSWDownscaleTo5551OnSourceImage:(CGImageRef)arg1 withSourceDimensions:(SCD_Struct_PL27)arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(CGRect*)arg5 bytesPerRow:(int*)arg6 ;
+(BOOL)performSWDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecification:(id)arg2 destinationData:(id*)arg3 imageRect:(CGRect*)arg4 bytesPerRow:(int*)arg5 ;
@end


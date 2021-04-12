/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLThumbnailUtilities : NSObject
+(BOOL)_validateSpecification:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_validateSpecifications:(id)arg1 destinationData:(id*)arg2 ;
+(BOOL)_performSWDownscaleTo5551OnSourceImage:(CGImageRef)arg1 withSourceDimensions:(SCD_Struct_PL29)arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(CGRect*)arg5 bytesPerRow:(int*)arg6 ;
+(int)_requiredDataLengthForSpecification:(id)arg1 ;
+(id)_destinationDataFromSpecification:(id)arg1 ;
+(id)_destinationDataArrayFromSpecifications:(id)arg1 ;
+(int)_bytesPerRowForWidthInPixels:(int)arg1 ;
+(BOOL)performSWDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecification:(id)arg2 destinationData:(id*)arg3 imageRect:(CGRect*)arg4 bytesPerRow:(int*)arg5 ;
+(BOOL)performHWCascadingDownscaleTo5551OnIOSurface:(IOSurfaceRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 usingContext:(id)arg4 ;
+(BOOL)performSWCascadingDownscaleTo5551OnImage:(CGImageRef)arg1 withSpecifications:(id)arg2 destinationData:(id*)arg3 ;
@end


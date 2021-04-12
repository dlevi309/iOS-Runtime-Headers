/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)supportsBlastDoor;
+(id)vCardDataForURL:(id)arg1 ;
+(CGImageRef)newMonogramImageForData:(id)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(double)contactMonogramDiameter;
+(CGImageRef)newContactCardPreviewFrom:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
+(id)contactCardPreviewPayloadsDirectoryFrom:(id)arg1 previewURL:(id)arg2 ;
+(id)contactCardPreviewPayloadFileURLFrom:(id)arg1 previewURL:(id)arg2 withFileExtension:(id)arg3 ;
+(CGImageRef)monogramForFirstName:(id)arg1 lastName:(id)arg2 ;
+(id)UTITypes;
+(id)generateContactPlistFrom:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
@end


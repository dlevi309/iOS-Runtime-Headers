/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(BOOL)writesToDisk;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 outSize:(CGSize*)arg3 error:(id*)arg4 ;
+(BOOL)decorateWatchfacePreview:(id)arg1 andWriteToURL:(id)arg2 imagePxSize:(CGSize*)arg3 ;
+(Class)greenfieldUtilitiesClass;
+(BOOL)_isAvailable;
+(id)UTITypes;
@end


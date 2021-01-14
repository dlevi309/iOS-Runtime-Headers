/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMPreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 outSize:(CGSize*)arg3 error:(id*)arg4 ;
+(id)UTITypes;
@end


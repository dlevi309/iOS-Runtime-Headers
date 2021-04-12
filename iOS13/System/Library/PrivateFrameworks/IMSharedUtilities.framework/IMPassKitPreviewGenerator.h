/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(id)passDataForURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)passDataHasFailed:(id)arg1 error:(id)arg2 ;
+(id)passForPassData:(id)arg1 error:(id*)arg2 ;
+(BOOL)passHasFailed:(id)arg1 error:(id)arg2 ;
+(id)passViewForPass:(id)arg1 ;
+(BOOL)passViewHasFailed:(id)arg1 ;
+(CGImageRef)newCroppedAndRescaledImageFromPKPassView:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 ;
+(BOOL)hasFailed:(id)arg1 error:(id)arg2 ;
@end


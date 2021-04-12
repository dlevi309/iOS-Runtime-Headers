/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMContactCardPreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(BOOL)supportsBlastDoor;
+(CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1 ;
+(id)mapSnapshotterQueue;
+(id)titleBarMaskImageForWidth:(double)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(CLLocationCoordinate2D)_legacyCoordinateForvCardURL:(id)arg1 ;
+(id)vCardDataForURL:(id)arg1 ;
+(id)vCardURLSForData:(id)arg1 ;
+(id)valueForKey:(id)arg1 forURLComponents:(id)arg2 ;
+(id)UTITypes;
+(CGSize)mapThumbnailFillSizeForWidth:(double)arg1 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id*)arg4 ;
@end


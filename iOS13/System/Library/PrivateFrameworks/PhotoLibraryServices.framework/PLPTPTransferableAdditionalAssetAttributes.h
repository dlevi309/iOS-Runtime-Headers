/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSNumber, PLSpatialOverCaptureInformation;


@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,retain,readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@required
-(long long)ptpTrashedState;
-(NSNumber *)embeddedThumbnailOffset;
-(NSString *)originatingAssetIdentifier;
-(NSNumber *)embeddedThumbnailHeight;
-(NSNumber *)embeddedThumbnailLength;
-(NSNumber *)embeddedThumbnailWidth;
-(NSString *)exifTimestampString;
-(PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;

@end


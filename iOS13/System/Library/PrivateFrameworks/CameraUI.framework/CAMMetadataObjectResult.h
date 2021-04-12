/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class NSString, AVMetadataObject;


@protocol CAMMetadataObjectResult <NSObject>
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
@required
-(NSString *)uniqueIdentifier;
-(NSString *)metadataType;
-(AVMetadataObject *)underlyingMetadataObject;

@end


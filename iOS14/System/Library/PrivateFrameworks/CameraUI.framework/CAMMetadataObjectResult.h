/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMIrisRequest <NSObject>
@property (nonatomic,readonly) long long irisMode; 
@required
-(long long)irisMode;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg1;
-(id)irisIdentifierForEV0:(BOOL)arg1;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1;
-(id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)arg1;
-(BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;

@end


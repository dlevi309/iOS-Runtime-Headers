/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMConflictingControlConfiguration : NSObject {

	long long _desiredFlashMode;
	long long _desiredHDRMode;
	long long _flashAndHDRConflictingControl;
	long long _desiredLivePhotoMode;

}

@property (nonatomic,readonly) long long desiredFlashMode;                           //@synthesize desiredFlashMode=_desiredFlashMode - In the implementation block
@property (nonatomic,readonly) long long desiredHDRMode;                             //@synthesize desiredHDRMode=_desiredHDRMode - In the implementation block
@property (nonatomic,readonly) long long flashAndHDRConflictingControl;              //@synthesize flashAndHDRConflictingControl=_flashAndHDRConflictingControl - In the implementation block
@property (nonatomic,readonly) long long desiredLivePhotoMode;                       //@synthesize desiredLivePhotoMode=_desiredLivePhotoMode - In the implementation block
+(void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long*)arg5 HDRMode:(long long*)arg6 ;
-(long long)desiredFlashMode;
-(long long)desiredHDRMode;
-(long long)flashAndHDRConflictingControl;
-(id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3 desiredLivePhotoMode:(long long)arg4 ;
-(long long)desiredLivePhotoMode;
@end


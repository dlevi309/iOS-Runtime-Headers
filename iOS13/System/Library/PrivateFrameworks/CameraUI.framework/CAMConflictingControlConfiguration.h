/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMConflictingControlConfiguration : NSObject {

	long long _desiredFlashMode;
	long long _desiredHDRMode;
	long long _flashAndHDRConflictingControl;

}

@property (nonatomic,readonly) long long desiredFlashMode;                           //@synthesize desiredFlashMode=_desiredFlashMode - In the implementation block
@property (nonatomic,readonly) long long desiredHDRMode;                             //@synthesize desiredHDRMode=_desiredHDRMode - In the implementation block
@property (nonatomic,readonly) long long flashAndHDRConflictingControl;              //@synthesize flashAndHDRConflictingControl=_flashAndHDRConflictingControl - In the implementation block
+(void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long*)arg5 HDRMode:(long long*)arg6 ;
-(id)init;
-(id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3 ;
-(long long)desiredFlashMode;
-(long long)desiredHDRMode;
-(long long)flashAndHDRConflictingControl;
@end


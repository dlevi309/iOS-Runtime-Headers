/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMHDRStatusIndicator : CAMControlStatusIndicator {

	BOOL _autoHDRAllowed;
	long long _hdrMode;

}

@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;                     //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,getter=isAutoHDRAllowed,nonatomic) BOOL autoHDRAllowed;              //@synthesize autoHDRAllowed=_autoHDRAllowed - In the implementation block
-(void)setHDRMode:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)hdrMode;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setHDRMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAutoHDRAllowed:(BOOL)arg1 ;
-(BOOL)isAutoHDRAllowed;
@end


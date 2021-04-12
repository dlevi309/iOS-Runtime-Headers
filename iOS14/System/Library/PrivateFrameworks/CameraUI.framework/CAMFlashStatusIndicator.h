/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFlashStatusIndicator : CAMControlStatusIndicator {

	BOOL _flashActive;
	BOOL _flashUnavailable;
	long long _flashMode;

}

@property (assign,nonatomic) long long flashMode;                                          //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,getter=isFlashActive,nonatomic) BOOL flashActive;                        //@synthesize flashActive=_flashActive - In the implementation block
@property (assign,getter=isFlashUnavailable,nonatomic) BOOL flashUnavailable;              //@synthesize flashUnavailable=_flashUnavailable - In the implementation block
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)isFlashActive;
-(BOOL)isFlashUnavailable;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setFlashMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFlashActive:(BOOL)arg1 ;
-(void)setFlashUnavailable:(BOOL)arg1 ;
@end


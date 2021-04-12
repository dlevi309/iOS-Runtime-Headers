/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isFlashActive;
-(BOOL)isFlashUnavailable;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setFlashActive:(BOOL)arg1 ;
-(void)setFlashUnavailable:(BOOL)arg1 ;
@end


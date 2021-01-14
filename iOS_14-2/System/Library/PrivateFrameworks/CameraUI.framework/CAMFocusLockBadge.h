/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFocusLockBadge : CEKBadgeTextView {

	BOOL _focusLocked;
	BOOL _exposureLocked;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
-(BOOL)isExposureLocked;
-(void)setExposureLocked:(BOOL)arg1 ;
-(BOOL)isFocusLocked;
-(void)setFocusLocked:(BOOL)arg1 ;
@end


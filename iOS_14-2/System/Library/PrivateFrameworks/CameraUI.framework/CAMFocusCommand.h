/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand {

	BOOL __shouldUseSmoothFocus;
	long long __focusMode;
	CGPoint __focusPointOfInterest;

}

@property (nonatomic,readonly) long long _focusMode;                       //@synthesize _focusMode=__focusMode - In the implementation block
@property (nonatomic,readonly) CGPoint _focusPointOfInterest;              //@synthesize _focusPointOfInterest=__focusPointOfInterest - In the implementation block
@property (nonatomic,readonly) BOOL _shouldUseSmoothFocus;                 //@synthesize _shouldUseSmoothFocus=__shouldUseSmoothFocus - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(long long)_focusMode;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 smooth:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)_focusPointOfInterest;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
-(id)initWithFocusMode:(long long)arg1 ;
-(BOOL)_shouldUseSmoothFocus;
-(id)initWithFocusMode:(long long)arg1 smooth:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


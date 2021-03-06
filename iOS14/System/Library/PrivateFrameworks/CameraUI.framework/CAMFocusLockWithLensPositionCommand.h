/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand {

	float __lensPosition;
	/*^block*/id __completionBlock;

}

@property (assign,setter=_setLensPosition:,nonatomic) float _lensPosition;               //@synthesize _lensPosition=__lensPosition - In the implementation block
@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
+(float)currentLensPositionSentinel;
-(void)executeWithContext:(id)arg1 ;
-(id)_completionBlock;
-(void)encodeWithCoder:(id)arg1 ;
-(float)_lensPosition;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setLensPosition:(float)arg1 ;
-(id)initWithLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


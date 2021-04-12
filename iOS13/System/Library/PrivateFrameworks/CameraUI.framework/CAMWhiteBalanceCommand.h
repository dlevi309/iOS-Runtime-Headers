/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {

	BOOL __matchExposureMode;
	long long __whiteBalanceMode;

}

@property (nonatomic,readonly) BOOL _matchExposureMode;                  //@synthesize _matchExposureMode=__matchExposureMode - In the implementation block
@property (nonatomic,readonly) long long _whiteBalanceMode;              //@synthesize _whiteBalanceMode=__whiteBalanceMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_whiteBalanceMode;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithWhiteBalanceMode:(long long)arg1 ;
-(id)initWithMatchExposureMode;
-(BOOL)_matchExposureMode;
-(id)_descriptionForWhiteBalanceMode:(long long)arg1 ;
@end


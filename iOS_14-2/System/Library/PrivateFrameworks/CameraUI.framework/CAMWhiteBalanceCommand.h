/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executeWithContext:(id)arg1 ;
-(id)initWithWhiteBalanceMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_whiteBalanceMode;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_matchExposureMode;
-(id)_descriptionForWhiteBalanceMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMatchExposureMode;
@end


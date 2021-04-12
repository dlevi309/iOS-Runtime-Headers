/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMInstructionLabel.h>

@class NSArray;

@interface CAMQRCodeInstructionLabel : CAMInstructionLabel {

	long long _devicePosition;
	NSArray* _mrcResults;

}

@property (assign,nonatomic) long long devicePosition;                                //@synthesize devicePosition=_devicePosition - In the implementation block
@property (setter=setMRCResults:,nonatomic,retain) NSArray * mrcResults;              //@synthesize mrcResults=_mrcResults - In the implementation block
+(id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
+(BOOL)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
-(NSArray *)mrcResults;
-(void)setMRCResults:(id)arg1 ;
-(long long)devicePosition;
-(void)_updateTextWithPriorMRCResults:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDevicePosition:(long long)arg1 ;
@end


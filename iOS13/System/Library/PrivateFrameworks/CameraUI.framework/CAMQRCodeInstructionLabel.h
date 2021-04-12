/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
+(id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)devicePosition;
-(void)setDevicePosition:(long long)arg1 ;
-(void)setMRCResults:(id)arg1 ;
-(void)_updateTextWithPriorMRCResults:(id)arg1 ;
-(NSArray *)mrcResults;
@end


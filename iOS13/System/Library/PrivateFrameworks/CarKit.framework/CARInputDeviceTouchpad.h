/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <CarKit/CarKit-Structs.h>
#import <CarKit/CARInputDevice.h>

@protocol CARInputDeviceTouchpadDelegate;
@interface CARInputDeviceTouchpad : CARInputDevice {

	BOOL _characterRecognitionSupported;
	double _sensitivity;
	unsigned long long _supportedFeedbackTypes;
	id<CARInputDeviceTouchpadDelegate> _delegate;
	CGSize _physicalSize;

}

@property (assign,nonatomic) double sensitivity;                                              //@synthesize sensitivity=_sensitivity - In the implementation block
@property (assign,nonatomic,__weak) id<CARInputDeviceTouchpadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize physicalSize;                                           //@synthesize physicalSize=_physicalSize - In the implementation block
@property (nonatomic,readonly) BOOL characterRecognitionSupported;                            //@synthesize characterRecognitionSupported=_characterRecognitionSupported - In the implementation block
@property (nonatomic,readonly) BOOL feedbackSupported; 
@property (nonatomic,readonly) unsigned long long supportedFeedbackTypes;                     //@synthesize supportedFeedbackTypes=_supportedFeedbackTypes - In the implementation block
+(CGSize)physicalSizeForTouchpadWithDigitizerProperties:(id)arg1 ;
-(id)description;
-(id<CARInputDeviceTouchpadDelegate>)delegate;
-(void)setDelegate:(id<CARInputDeviceTouchpadDelegate>)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(double)sensitivity;
-(CGSize)physicalSize;
-(unsigned long long)supportedFeedbackTypes;
-(BOOL)feedbackSupported;
-(void)performFeedbackOfType:(unsigned long long)arg1 ;
-(CGSize)_physicalSizeForTouchpadServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)_characterRecognitionSupportedForServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)characterRecognitionSupported;
-(void)setSensitivity:(double)arg1 ;
-(id)initWithServiceClient:(IOHIDServiceClientRef)arg1 UUID:(id)arg2 settings:(id)arg3 delegate:(id)arg4 ;
-(void)updateSettingsWithSettings:(id)arg1 ;
-(id)_initWithSupportedHapticTypes:(unsigned long long)arg1 physicalSize:(CGSize)arg2 characterRecognitionSupported:(BOOL)arg3 senderID:(unsigned long long)arg4 UUID:(id)arg5 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPortInternal, AVCaptureInput, NSString;

@interface AVCaptureInputPort : NSObject {

	AVCaptureInputPortInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureInput * input; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) NSString * sourceDeviceType; 
@property (nonatomic,readonly) long long sourceDevicePosition; 
+(id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
+(BOOL)automaticallyNotifiesObserversOfClock;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(AVCaptureInput *)input;
-(BOOL)isEnabled;
-(NSString *)mediaType;
-(id)sourceID;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(OpaqueCMClockRef)clock;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(long long)sourceDevicePosition;
-(id)figCaptureSourceConfigurationForSessionPreset:(id)arg1 ;
-(NSString *)sourceDeviceType;
-(void)_setClock:(OpaqueCMClockRef)arg1 ;
-(void)_setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
-(BOOL)sourcesFromConstituentDevice;
@end


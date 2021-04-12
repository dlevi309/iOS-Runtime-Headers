/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
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
+(void)initialize;
+(id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
+(BOOL)automaticallyNotifiesObserversOfClock;
-(OpaqueCMClockRef)clock;
-(void)bumpChangeSeed;
-(NSString *)mediaType;
-(AVCaptureInput *)input;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(int)changeSeed;
-(id)figCaptureSourceConfigurationForSessionPreset:(id)arg1 ;
-(void)_setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)sourcesFromConstituentDevice;
-(void)setEnabled:(BOOL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)description;
-(void)setOwner:(id)arg1 ;
-(long long)sourceDevicePosition;
-(id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
-(BOOL)isEnabled;
-(id)sourceID;
-(NSString *)sourceDeviceType;
-(void)_setClock:(OpaqueCMClockRef)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject {

	AVExternalDeviceHIDInternal* _externalDeviceHID;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * screenID; 
@property (assign,nonatomic) long long inputMode; 
-(void)dealloc;
-(NSString *)UUID;
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(NSString *)screenID;
-(id)_externalDevice;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject {

	AVExternalDeviceHIDInternal* _externalDeviceHID;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * screenID; 
@property (assign,nonatomic) long long inputMode; 
-(void)setInputMode:(long long)arg1 ;
-(long long)inputMode;
-(NSString *)UUID;
-(NSString *)screenID;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2 ;
-(id)_externalDevice;
-(void)dealloc;
@end


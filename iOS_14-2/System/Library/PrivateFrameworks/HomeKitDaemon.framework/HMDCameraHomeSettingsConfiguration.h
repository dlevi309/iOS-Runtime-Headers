/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDCameraHomeSettingsConfiguration : HMFObject {

	BOOL _faceClassificationEnabled;
	BOOL _owner;
	NSArray* _cameraSettings;
	NSArray* _userSettings;
	unsigned long long _enabledResidentsDeviceCapabilities;

}

@property (nonatomic,readonly) NSArray * cameraSettings;                                             //@synthesize cameraSettings=_cameraSettings - In the implementation block
@property (nonatomic,readonly) NSArray * userSettings;                                               //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;                          //@synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities - In the implementation block
@property (getter=isFaceClassificationEnabled,readonly) BOOL faceClassificationEnabled;              //@synthesize faceClassificationEnabled=_faceClassificationEnabled - In the implementation block
@property (getter=isOwner,readonly) BOOL owner;                                                      //@synthesize owner=_owner - In the implementation block
-(NSArray *)userSettings;
-(BOOL)isOwner;
-(id)initWithHome:(id)arg1 ;
-(BOOL)isFaceClassificationEnabled;
-(NSArray *)cameraSettings;
-(unsigned long long)enabledResidentsDeviceCapabilities;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isAdvancedAppleAudioDevice;
	BOOL _supportsInEarDetection;
	BOOL _supportsVoiceTrigger;
	BOOL _supportsSpokenNotification;
	BOOL _supportsListeningModeANC;
	BOOL _supportsListeningModeTransparency;
	unsigned _vendorID;
	unsigned _productID;
	NSString* _address;
	NSUUID* _deviceUID;

}

@property (nonatomic,copy,readonly) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceUID;                             //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,readonly) unsigned vendorID;                                   //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) unsigned productID;                                  //@synthesize productID=_productID - In the implementation block
@property (nonatomic,readonly) BOOL isAdvancedAppleAudioDevice;                     //@synthesize isAdvancedAppleAudioDevice=_isAdvancedAppleAudioDevice - In the implementation block
@property (nonatomic,readonly) BOOL supportsInEarDetection;                         //@synthesize supportsInEarDetection=_supportsInEarDetection - In the implementation block
@property (nonatomic,readonly) BOOL supportsVoiceTrigger;                           //@synthesize supportsVoiceTrigger=_supportsVoiceTrigger - In the implementation block
@property (nonatomic,readonly) BOOL supportsSpokenNotification;                     //@synthesize supportsSpokenNotification=_supportsSpokenNotification - In the implementation block
@property (nonatomic,readonly) BOOL supportsListeningModeANC;                       //@synthesize supportsListeningModeANC=_supportsListeningModeANC - In the implementation block
@property (nonatomic,readonly) BOOL supportsListeningModeTransparency;              //@synthesize supportsListeningModeTransparency=_supportsListeningModeTransparency - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSUUID *)deviceUID;
-(id)initWithAddress:(id)arg1 deviceUID:(id)arg2 vendorID:(unsigned)arg3 productID:(unsigned)arg4 isAdvancedAppleAudioDevice:(BOOL)arg5 supportsInEarDetection:(BOOL)arg6 supportsVoiceTrigger:(BOOL)arg7 supportsSpokenNotification:(BOOL)arg8 supportsListeningModeANC:(BOOL)arg9 supportsListeningModeTransparency:(BOOL)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)productID;
-(NSString *)address;
-(BOOL)isAdvancedAppleAudioDevice;
-(BOOL)supportsInEarDetection;
-(BOOL)supportsVoiceTrigger;
-(BOOL)supportsSpokenNotification;
-(BOOL)supportsListeningModeANC;
-(BOOL)supportsListeningModeTransparency;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)vendorID;
-(BOOL)isEqual:(id)arg1 ;
@end


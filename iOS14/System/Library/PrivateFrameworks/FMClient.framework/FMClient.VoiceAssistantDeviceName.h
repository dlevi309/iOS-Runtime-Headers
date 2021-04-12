/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SADPDeviceDetail, NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {

	 deviceName;
	 ownerFirstName;
	 ownerLastName;
	 $__lazy_storage_$_syncAnchor;

}

@property (nonatomic,readonly) SADPDeviceDetail * sa_deviceDetail; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * ownerFirstName; 
@property (readonly,nonatomic) NSString * ownerLastName; 
@property (copy,nonatomic) NSString * syncAnchor; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(SADPDeviceDetail *)sa_deviceDetail;
-(NSString *)deviceName;
-(id)init;
-(NSString *)syncAnchor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3 ;
@end


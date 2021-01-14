/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolSupportedFeatures;

@interface RMProtocolServerCapabilities : RMModelPayloadBase {

	NSString* _capabilitiesVersion;
	RMProtocolSupportedFeatures* _capabilitiesSupportedFeatures;

}

@property (nonatomic,copy) NSString * capabilitiesVersion;                                           //@synthesize capabilitiesVersion=_capabilitiesVersion - In the implementation block
@property (nonatomic,copy) RMProtocolSupportedFeatures * capabilitiesSupportedFeatures;              //@synthesize capabilitiesSupportedFeatures=_capabilitiesSupportedFeatures - In the implementation block
+(id)requestWithVersion:(id)arg1 supportedFeatures:(id)arg2 ;
-(void)setCapabilitiesVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)capabilitiesVersion;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setCapabilitiesSupportedFeatures:(RMProtocolSupportedFeatures *)arg1 ;
-(RMProtocolSupportedFeatures *)capabilitiesSupportedFeatures;
@end


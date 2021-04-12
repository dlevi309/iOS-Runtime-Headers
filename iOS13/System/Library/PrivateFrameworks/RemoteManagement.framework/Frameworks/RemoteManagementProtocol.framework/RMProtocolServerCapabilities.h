/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCapabilitiesVersion:(NSString *)arg1 ;
-(NSString *)capabilitiesVersion;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setCapabilitiesSupportedFeatures:(RMProtocolSupportedFeatures *)arg1 ;
-(RMProtocolSupportedFeatures *)capabilitiesSupportedFeatures;
@end


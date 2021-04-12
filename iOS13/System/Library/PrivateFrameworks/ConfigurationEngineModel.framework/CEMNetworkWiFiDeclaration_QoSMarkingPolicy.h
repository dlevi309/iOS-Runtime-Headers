/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase {

	NSArray* _payloadQoSMarkingWhitelistedAppIdentifiers;
	NSNumber* _payloadQoSMarkingAppleAudioVideoCalls;
	NSNumber* _payloadQoSMarkingEnabled;

}

@property (nonatomic,copy) NSArray * payloadQoSMarkingWhitelistedAppIdentifiers;              //@synthesize payloadQoSMarkingWhitelistedAppIdentifiers=_payloadQoSMarkingWhitelistedAppIdentifiers - In the implementation block
@property (nonatomic,copy) NSNumber * payloadQoSMarkingAppleAudioVideoCalls;                  //@synthesize payloadQoSMarkingAppleAudioVideoCalls=_payloadQoSMarkingAppleAudioVideoCalls - In the implementation block
@property (nonatomic,copy) NSNumber * payloadQoSMarkingEnabled;                               //@synthesize payloadQoSMarkingEnabled=_payloadQoSMarkingEnabled - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadQoSMarkingWhitelistedAppIdentifiers:(NSArray *)arg1 ;
-(void)setPayloadQoSMarkingAppleAudioVideoCalls:(NSNumber *)arg1 ;
-(void)setPayloadQoSMarkingEnabled:(NSNumber *)arg1 ;
-(NSArray *)payloadQoSMarkingWhitelistedAppIdentifiers;
-(NSNumber *)payloadQoSMarkingAppleAudioVideoCalls;
-(NSNumber *)payloadQoSMarkingEnabled;
@end


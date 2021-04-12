/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase {

	NSNumber* _payloadVoiceOver;
	NSNumber* _payloadZoom;
	NSNumber* _payloadInvertColors;
	NSNumber* _payloadAssistiveTouch;

}

@property (nonatomic,copy) NSNumber * payloadVoiceOver;                   //@synthesize payloadVoiceOver=_payloadVoiceOver - In the implementation block
@property (nonatomic,copy) NSNumber * payloadZoom;                        //@synthesize payloadZoom=_payloadZoom - In the implementation block
@property (nonatomic,copy) NSNumber * payloadInvertColors;                //@synthesize payloadInvertColors=_payloadInvertColors - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAssistiveTouch;              //@synthesize payloadAssistiveTouch=_payloadAssistiveTouch - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithVoiceOver:(id)arg1 withZoom:(id)arg2 withInvertColors:(id)arg3 withAssistiveTouch:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadVoiceOver:(NSNumber *)arg1 ;
-(void)setPayloadZoom:(NSNumber *)arg1 ;
-(void)setPayloadInvertColors:(NSNumber *)arg1 ;
-(void)setPayloadAssistiveTouch:(NSNumber *)arg1 ;
-(NSNumber *)payloadVoiceOver;
-(NSNumber *)payloadZoom;
-(NSNumber *)payloadInvertColors;
-(NSNumber *)payloadAssistiveTouch;
@end


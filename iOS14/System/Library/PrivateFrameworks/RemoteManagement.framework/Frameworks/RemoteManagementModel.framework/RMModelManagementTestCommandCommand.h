/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelCommandBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelManagementTestCommandCommand : RMModelCommandBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadEcho;
	NSString* _payloadReturnStatus;

}

@property (nonatomic,copy) NSString * payloadEcho;                      //@synthesize payloadEcho=_payloadEcho - In the implementation block
@property (nonatomic,copy) NSString * payloadReturnStatus;              //@synthesize payloadReturnStatus=_payloadReturnStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 echo:(id)arg2 returnStatus:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 echo:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadEcho:(NSString *)arg1 ;
-(void)setPayloadReturnStatus:(NSString *)arg1 ;
-(NSString *)payloadEcho;
-(NSString *)payloadReturnStatus;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end


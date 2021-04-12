/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	RMModelAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                          //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                    //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * commandPayload;              //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setCommandType:(NSString *)arg1 ;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandType;
-(BOOL)mustBeSupervised;
-(int)executionLevel;
-(RMModelAnyPayload *)commandPayload;
-(void)setCommandPayload:(RMModelAnyPayload *)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end


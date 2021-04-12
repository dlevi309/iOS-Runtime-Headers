/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelCommandBase : RMModelPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	NSString* _commandDescription;
	RMModelAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                          //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                    //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) NSString * commandDescription;                   //@synthesize commandDescription=_commandDescription - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * commandPayload;              //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandType;
-(void)setCommandType:(NSString *)arg1 ;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(BOOL)mustBeSupervised;
-(int)executionLevel;
-(NSString *)commandDescription;
-(void)setCommandDescription:(NSString *)arg1 ;
-(RMModelAnyPayload *)commandPayload;
-(void)setCommandPayload:(RMModelAnyPayload *)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end


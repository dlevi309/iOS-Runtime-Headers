/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMCommandBase : CEMPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	NSString* _commandDescription;
	NSNumber* _commandRequiresNetworkTether;
	CEMAnyPayload* _commandPayload;

}

@property (nonatomic,copy) NSString * commandType;                               //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,copy) NSString * commandIdentifier;                         //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,copy) NSString * commandDescription;                        //@synthesize commandDescription=_commandDescription - In the implementation block
@property (nonatomic,copy) NSNumber * commandRequiresNetworkTether;              //@synthesize commandRequiresNetworkTether=_commandRequiresNetworkTether - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * commandPayload;                       //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)commandForPayload:(id)arg1 error:(id*)arg2 ;
+(id)commandForData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serialize;
-(NSString *)commandType;
-(void)setCommandType:(NSString *)arg1 ;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(BOOL)mustBeSupervised;
-(int)executionLevel;
-(BOOL)loadCommandFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)commandDescription;
-(void)setCommandDescription:(NSString *)arg1 ;
-(NSNumber *)commandRequiresNetworkTether;
-(void)setCommandRequiresNetworkTether:(NSNumber *)arg1 ;
-(CEMAnyPayload *)commandPayload;
-(void)setCommandPayload:(CEMAnyPayload *)arg1 ;
@end


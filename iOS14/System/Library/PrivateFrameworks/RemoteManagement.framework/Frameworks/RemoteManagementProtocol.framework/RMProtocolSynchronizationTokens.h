/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSDate, NSString;

@interface RMProtocolSynchronizationTokens : RMModelPayloadBase {

	NSDate* _tokensTimestamp;
	NSString* _tokensCapabilitiesToken;
	NSString* _tokensCommandToken;
	NSString* _tokensDeclarationsToken;
	NSString* _tokensOrganizationDetailsToken;

}

@property (nonatomic,copy) NSDate * tokensTimestamp;                               //@synthesize tokensTimestamp=_tokensTimestamp - In the implementation block
@property (nonatomic,copy) NSString * tokensCapabilitiesToken;                     //@synthesize tokensCapabilitiesToken=_tokensCapabilitiesToken - In the implementation block
@property (nonatomic,copy) NSString * tokensCommandToken;                          //@synthesize tokensCommandToken=_tokensCommandToken - In the implementation block
@property (nonatomic,copy) NSString * tokensDeclarationsToken;                     //@synthesize tokensDeclarationsToken=_tokensDeclarationsToken - In the implementation block
@property (nonatomic,copy) NSString * tokensOrganizationDetailsToken;              //@synthesize tokensOrganizationDetailsToken=_tokensOrganizationDetailsToken - In the implementation block
+(id)requestWithTimestamp:(id)arg1 capabilitiesToken:(id)arg2 commandToken:(id)arg3 declarationsToken:(id)arg4 organizationDetailsToken:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setTokensTimestamp:(NSDate *)arg1 ;
-(void)setTokensCapabilitiesToken:(NSString *)arg1 ;
-(void)setTokensCommandToken:(NSString *)arg1 ;
-(void)setTokensDeclarationsToken:(NSString *)arg1 ;
-(void)setTokensOrganizationDetailsToken:(NSString *)arg1 ;
-(NSDate *)tokensTimestamp;
-(NSString *)tokensCapabilitiesToken;
-(NSString *)tokensCommandToken;
-(NSString *)tokensDeclarationsToken;
-(NSString *)tokensOrganizationDetailsToken;
@end


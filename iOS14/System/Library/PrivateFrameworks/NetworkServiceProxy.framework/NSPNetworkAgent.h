/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID, NSPConfiguration, NSPAppRule, NSData;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent> {

	unsigned char _dataDigest[32];
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NSPConfiguration* _configuration;
	NSPAppRule* _appRule;
	NSData* _keybag;
	NSData* _agentData;

}

@property (retain) NSData * agentData;                                                   //@synthesize agentData=_agentData - In the implementation block
@property (retain) NSPConfiguration * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSPAppRule * appRule;                                                 //@synthesize appRule=_appRule - In the implementation block
@property (retain) NSData * keybag;                                                      //@synthesize keybag=_keybag - In the implementation block
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(void)setKeybag:(NSData *)arg1 ;
-(NSData *)keybag;
-(void)setActive:(BOOL)arg1 ;
-(void)setAppRule:(NSPAppRule *)arg1 ;
-(id)init;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(NSPConfiguration *)configuration;
-(void)setAgentData:(NSData *)arg1 ;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)parseAgentData;
-(NSData *)agentData;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(void)setUserActivated:(BOOL)arg1 ;
-(NSPAppRule *)appRule;
-(NSString *)agentDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
@end


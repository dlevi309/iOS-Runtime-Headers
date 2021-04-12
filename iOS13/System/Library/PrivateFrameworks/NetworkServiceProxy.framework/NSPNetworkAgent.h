/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(NSPConfiguration *)configuration;
-(void)setUserActivated:(BOOL)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSData *)agentData;
-(void)setAgentData:(NSData *)arg1 ;
-(id)copyAgentData;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(NSData *)keybag;
-(NSPAppRule *)appRule;
-(void)setAppRule:(NSPAppRule *)arg1 ;
-(void)setKeybag:(NSData *)arg1 ;
-(void)parseAgentData;
@end


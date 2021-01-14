/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@protocol NENexusAgentDelegate;
@class NSUUID, NSString, NWNetworkAgentRegistration, NSObject;

@interface NENexusAgent : NSObject <NWNetworkAgent> {

	BOOL active;
	BOOL supportsBrowseRequests;
	BOOL nexusProvider;
	unsigned _frameType;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NWNetworkAgentRegistration* _registration;
	NSObject*<NENexusAgentDelegate> _delegate;

}

@property (retain) NWNetworkAgentRegistration * registration;                            //@synthesize registration=_registration - In the implementation block
@property (assign) unsigned frameType;                                                   //@synthesize frameType=_frameType - In the implementation block
@property (__weak) NSObject*<NENexusAgentDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
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
-(NWNetworkAgentRegistration *)registration;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(BOOL)requestNexusWithOptions:(id)arg1 ;
-(void)closeNexusWithOptions:(id)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1 ;
-(BOOL)isNexusProvider;
-(void)setNexusProvider:(BOOL)arg1 ;
-(void)setFrameType:(unsigned)arg1 ;
-(void)setRegistration:(NWNetworkAgentRegistration *)arg1 ;
-(NSObject*<NENexusAgentDelegate>)delegate;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(BOOL)assertAgentWithOptions:(id)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(void)setDelegate:(NSObject*<NENexusAgentDelegate>)arg1 ;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)unassertAgentWithOptions:(id)arg1 ;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(void)setUserActivated:(BOOL)arg1 ;
-(NSString *)agentDescription;
-(void)setSupportsBrowseRequests:(BOOL)arg1 ;
-(BOOL)supportsBrowseRequests;
-(unsigned)frameType;
@end


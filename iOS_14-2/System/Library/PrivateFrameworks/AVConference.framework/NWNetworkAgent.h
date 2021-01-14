/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
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
@optional
-(BOOL)startAgentWithOptions:(id)arg1;
-(BOOL)requestNexusWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1;
-(BOOL)isNexusProvider;
-(void)setNexusProvider:(BOOL)arg1;
-(BOOL)requiresAssert;
-(BOOL)supportsListenRequests;
-(void)setSupportsListenRequests:(BOOL)arg1;
-(BOOL)supportsResolveRequests;
-(void)setSupportsResolveRequests:(BOOL)arg1;
-(void)setRequiresAssert:(BOOL)arg1;
-(BOOL)assertAgentWithOptions:(id)arg1;
-(void)setUpdateClientsImmediately:(BOOL)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(BOOL)updateClientsImmediately;
-(void)setSupportsBrowseRequests:(BOOL)arg1;
-(BOOL)supportsBrowseRequests;

@required
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1;
-(void)setActive:(BOOL)arg1;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(void)setAgentUUID:(id)arg1;
-(void)setAgentDescription:(id)arg1;
-(void)setVoluntary:(BOOL)arg1;
-(void)setKernelActivated:(BOOL)arg1;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(void)setUserActivated:(BOOL)arg1;
-(NSString *)agentDescription;

@end


/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
@optional
-(void)setNetworkProvider:(BOOL)arg1;
-(void)setNexusProvider:(BOOL)arg1;
-(BOOL)updateClientsImmediately;
-(BOOL)supportsResolveRequests;
-(BOOL)supportsBrowseRequests;
-(void)unassertAgentWithOptions:(id)arg1;
-(BOOL)assertAgentWithOptions:(id)arg1;
-(BOOL)startAgentWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(BOOL)requestNexusWithOptions:(id)arg1;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)isNexusProvider;
-(BOOL)requiresAssert;
-(void)setSpecificUseOnly:(BOOL)arg1;
-(void)setSupportsBrowseRequests:(BOOL)arg1;
-(void)setSupportsResolveRequests:(BOOL)arg1;
-(void)setRequiresAssert:(BOOL)arg1;
-(void)setUpdateClientsImmediately:(BOOL)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(void)setUserActivated:(BOOL)arg1;
-(void)setVoluntary:(BOOL)arg1;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(id)copyAgentData;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(void)setKernelActivated:(BOOL)arg1;
-(void)setAgentUUID:(id)arg1;

@end


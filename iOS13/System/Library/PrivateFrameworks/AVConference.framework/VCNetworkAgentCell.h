/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSUUID, NSString, NWNetworkAgentRegistration;

@interface VCNetworkAgentCell : VCObject <NWNetworkAgent> {

	NSUUID* _agentUUID;
	NSString* _agentDescription;
	BOOL _active;
	BOOL _voluntary;
	int _assertionRefCount;
	NWNetworkAgentRegistration* _agentRegistration;
	NSString* _wifiInterfaceName;
	BOOL kernelActivated;
	BOOL userActivated;

}

@property (readonly) BOOL cellularAssertionActive; 
@property (nonatomic,copy) NSString * agentDescription;                                  //@synthesize agentDescription=_agentDescription - In the implementation block
@property (nonatomic,copy) NSUUID * agentUUID;                                           //@synthesize agentUUID=_agentUUID - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary;                          //@synthesize voluntary=_voluntary - In the implementation block
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)sharedInstance;
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setUserActivated:(BOOL)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(id)copyAgentData;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)cellularAssertionActive;
-(void)addCellularAssertion;
-(void)removeCellularAssertion;
-(id)queryWifiInterfaceName;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject <NWNetworkAgent> {

	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	int _internalSessionType;
	int _lastStatus;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NSUUID* _internalUUID;
	NSString* _name;
	/*^block*/id _internalStartHandler;
	NSString* _configurationName;

}

@property (copy) NSUUID * internalUUID;                                                  //@synthesize internalUUID=_internalUUID - In the implementation block
@property (assign) int internalSessionType;                                              //@synthesize internalSessionType=_internalSessionType - In the implementation block
@property (retain) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (copy) id internalStartHandler;                                                //@synthesize internalStartHandler=_internalStartHandler - In the implementation block
@property (copy,readonly) NSUUID * configurationUUID; 
@property (copy) NSString * configurationName;                                           //@synthesize configurationName=_configurationName - In the implementation block
@property (readonly) int sessionType; 
@property (assign) int lastStatus;                                                       //@synthesize lastStatus=_lastStatus - In the implementation block
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setStartHandler:(/*^block*/id)arg1 ;
-(NSString *)configurationName;
-(void)setUserActivated:(BOOL)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(id)copyAgentData;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(int)sessionType;
-(NSUUID *)internalUUID;
-(void)setInternalUUID:(NSUUID *)arg1 ;
-(id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 name:(id)arg3 ;
-(NSUUID *)configurationUUID;
-(int)internalSessionType;
-(void)setInternalStartHandler:(id)arg1 ;
-(id)internalStartHandler;
-(BOOL)matchesFileHandle:(id)arg1 ;
-(void)setInternalSessionType:(int)arg1 ;
-(void)setConfigurationName:(NSString *)arg1 ;
-(int)lastStatus;
-(void)setLastStatus:(int)arg1 ;
@end


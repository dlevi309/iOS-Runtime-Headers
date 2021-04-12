/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(NSString *)configurationName;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 name:(id)arg3 ;
-(NSUUID *)configurationUUID;
-(NSUUID *)internalUUID;
-(int)internalSessionType;
-(void)setInternalStartHandler:(id)arg1 ;
-(id)internalStartHandler;
-(BOOL)startAgentWithOptions:(id)arg1 ;
-(BOOL)matchesFileHandle:(id)arg1 ;
-(void)setInternalUUID:(NSUUID *)arg1 ;
-(void)setInternalSessionType:(int)arg1 ;
-(int)lastStatus;
-(void)setConfigurationName:(NSString *)arg1 ;
-(void)setLastStatus:(int)arg1 ;
-(NSUUID *)agentUUID;
-(void)setStartHandler:(/*^block*/id)arg1 ;
-(id)copyAgentData;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(int)sessionType;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSString *)name;
-(void)setVoluntary:(BOOL)arg1 ;
-(void)setKernelActivated:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(void)setUserActivated:(BOOL)arg1 ;
-(NSString *)agentDescription;
@end


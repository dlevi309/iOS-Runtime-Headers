/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {

	int _assertionRefCount;
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	BOOL specificUseOnly;
	NSString* agentDescription;
	NSUUID* agentUUID;

}

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
+(id)sharedInstance;
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
-(id)init;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(void)setUserActivated:(BOOL)arg1 ;
-(NSString *)agentDescription;
-(void)dealloc;
-(void)addAssertion;
-(void)removeAssertion;
@end


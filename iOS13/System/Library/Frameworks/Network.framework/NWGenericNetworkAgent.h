/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription> {

	netagent* _internalNetagent;

}

@property (assign) netagent* internalNetagent;                                             //@synthesize internalNetagent=_internalNetagent - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * agentDomain; 
@property (nonatomic,readonly) NSString * agentType; 
@property (nonatomic,readonly) NSString * agentDescription; 
@property (nonatomic,readonly) NSUUID * agentUUID; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isKernelActivated,nonatomic,readonly) BOOL kernelActivated; 
@property (getter=isUserActivated,nonatomic,readonly) BOOL userActivated; 
@property (getter=isVoluntary,nonatomic,readonly) BOOL voluntary; 
@property (getter=isSpecificUseOnly,nonatomic,readonly) BOOL specificUseOnly; 
@property (getter=isNetworkProvider,nonatomic,readonly) BOOL networkProvider; 
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(NSString *)agentDescription;
-(id)initWithKernelAgent:(const netagent*)arg1 ;
-(NSString *)agentDomain;
-(NSString *)agentType;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)isNexusProvider;
-(BOOL)supportsBrowse;
-(BOOL)requiresAssert;
-(BOOL)supportsResolve;
-(netagent*)internalNetagent;
-(void)setInternalNetagent:(netagent*)arg1 ;
@end


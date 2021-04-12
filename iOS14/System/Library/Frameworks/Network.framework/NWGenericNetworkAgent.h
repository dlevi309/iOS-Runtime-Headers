/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)privateDescription;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)isNexusProvider;
-(BOOL)requiresAssert;
-(NSString *)agentType;
-(NSUUID *)agentUUID;
-(BOOL)isActive;
-(BOOL)isUserActivated;
-(NSString *)agentDomain;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)description;
-(id)initWithKernelAgent:(const netagent*)arg1 ;
-(BOOL)supportsBrowse;
-(BOOL)supportsResolve;
-(netagent*)internalNetagent;
-(void)setInternalNetagent:(netagent*)arg1 ;
-(BOOL)isKernelActivated;
-(BOOL)isVoluntary;
-(NSString *)agentDescription;
-(void)dealloc;
@end


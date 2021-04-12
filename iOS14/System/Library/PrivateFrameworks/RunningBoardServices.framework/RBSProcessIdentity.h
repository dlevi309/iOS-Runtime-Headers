/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RBSProcessIdentifier, NSUUID;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying> {

	int _pid;
	NSString* _description;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned char defaultManageFlags; 
@property (getter=isExtension,nonatomic,readonly) BOOL extension; 
@property (nonatomic,readonly) BOOL inheritsCoalitionBand; 
@property (getter=isAnonymous,nonatomic,readonly) BOOL anonymous; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,readonly) int platform; 
@property (getter=isEmbeddedApplication,nonatomic,readonly) BOOL embeddedApplication; 
@property (nonatomic,copy,readonly) NSString * embeddedApplicationIdentifier; 
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (nonatomic,copy,readonly) NSString * daemonJobLabel; 
@property (getter=isXPCService,nonatomic,readonly) BOOL XPCService; 
@property (nonatomic,copy,readonly) NSString * xpcServiceIdentifier; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * hostIdentity; 
@property (nonatomic,copy,readonly) RBSProcessIdentifier * hostIdentifier; 
@property (getter=isApplication,nonatomic,readonly) BOOL application; 
@property (nonatomic,copy,readonly) NSString * applicationJobLabel; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (readonly) unsigned long long hash;                                                      //@synthesize hash=_hash - In the implementation block
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description;                                                  //@synthesize description=_description - In the implementation block
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)identityForXPCServiceIdentifier:(id)arg1 ;
+(id)identityForApplicationJobLabel:(id)arg1 bundleID:(id)arg2 platform:(int)arg3 ;
+(id)extensionIdentityForPlugInKitIdentifier:(id)arg1 hostIdentifier:(id)arg2 UUID:(id)arg3 ;
+(id)identityForXPCServiceProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 host:(id)arg4 ;
+(id)identityForLaunchProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForExecutablePath:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForXPCServicePath:(id)arg1 host:(id)arg2 ;
+(BOOL)shouldManageExtensionWithExtensionPoint:(id)arg1 ;
+(id)identityOfCurrentProcess;
+(id)_identityForXPCServicePath:(id)arg1 properties:(id)arg2 pid:(int)arg3 euid:(unsigned)arg4 host:(id)arg5 ;
+(id)_identityForXPCServiceIdentifier:(id)arg1 hostInstance:(id)arg2 UUID:(id)arg3 variant:(long long)arg4 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 jobLabel:(id)arg2 euid:(unsigned)arg3 platform:(int)arg4 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 euid:(unsigned)arg2 ;
+(id)_identityForXPCServiceIdentifier:(id)arg1 variant:(long long)arg2 ;
+(id)_identityForXPCServicePath:(id)arg1 type:(unsigned long long)arg2 pid:(int)arg3 euid:(unsigned)arg4 host:(id)arg5 UUID:(id)arg6 ;
+(id)identityForPlugInKitIdentifier:(id)arg1 ;
+(id)identityForDaemonJobLabel:(id)arg1 ;
+(id)identityForApplicationJobLabel:(id)arg1 ;
-(BOOL)isDaemon;
-(int)platform;
-(BOOL)matchesProcess:(id)arg1 ;
-(BOOL)isAnonymous;
-(NSUUID *)uuid;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(id)processPredicate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)debugDescription;
-(RBSProcessIdentifier *)hostIdentifier;
-(NSString *)applicationJobLabel;
-(unsigned)euid;
-(BOOL)isApplication;
-(BOOL)isXPCService;
-(NSString *)daemonJobLabel;
-(NSString *)description;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)initWithDecodeFromJob:(id)arg1 ;
-(id)encodeForJob;
-(NSString *)xpcServiceIdentifier;
-(unsigned long long)hash;
-(id)_initOpaqueWithPid:(int)arg1 name:(id)arg2 euid:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmbeddedApplication;
-(id)_init;
-(RBSProcessIdentity *)hostIdentity;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(NSString *)embeddedApplicationIdentifier;
-(BOOL)isExtension;
-(BOOL)inheritsCoalitionBand;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)defaultManageFlags;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
@end


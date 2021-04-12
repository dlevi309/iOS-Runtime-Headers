/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSXPCServiceIdentity, NSString, RBSProcessIdentifier;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, BSXPCSecureCoding, BSDescriptionProviding, NSSecureCoding, NSCopying> {

	unsigned long long _hash;
	int _instanceID;
	unsigned char _type;
	RBSXPCServiceIdentity* _serviceIdentity;
	unsigned _euid;
	NSString* _executablePath;
	NSString* _picoDesc;
	NSString* _description;
	NSString* _embeddedApplicationIdentifier;
	NSString* _daemonJobLabel;

}

@property (getter=isDefaultManaged,nonatomic,readonly) BOOL defaultManaged; 
@property (getter=isExtension,nonatomic,readonly) BOOL extension; 
@property (nonatomic,copy,readonly) NSString * executablePath;                                     //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) BOOL inheritsCoalitionBand; 
@property (nonatomic,readonly) unsigned euid;                                                      //@synthesize euid=_euid - In the implementation block
@property (nonatomic,readonly) NSString * picoDesc;                                                //@synthesize picoDesc=_picoDesc - In the implementation block
@property (getter=isEmbeddedApplication,nonatomic,readonly) BOOL embeddedApplication; 
@property (nonatomic,copy,readonly) NSString * embeddedApplicationIdentifier;                      //@synthesize embeddedApplicationIdentifier=_embeddedApplicationIdentifier - In the implementation block
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (nonatomic,copy,readonly) NSString * daemonJobLabel;                                     //@synthesize daemonJobLabel=_daemonJobLabel - In the implementation block
@property (getter=isXPCService,nonatomic,readonly) BOOL XPCService; 
@property (nonatomic,copy,readonly) NSString * xpcServiceIdentifier; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * hostIdentity; 
@property (nonatomic,copy,readonly) RBSProcessIdentifier * hostIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description;                                                  //@synthesize description=_description - In the implementation block
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 euid:(unsigned)arg2 ;
+(id)identityForDaemonJobLabel:(id)arg1 ;
+(id)_identityForXPCServicePath:(id)arg1 properties:(id)arg2 pid:(int)arg3 euid:(unsigned)arg4 host:(id)arg5 ;
+(id)identityOfCurrentProcess;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 ;
+(id)identityForDaemonPlistPath:(id)arg1 ;
+(id)identityForLaunchProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForExecutablePath:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForXPCServiceIdentifier:(id)arg1 ;
+(id)identityForXPCServicePath:(id)arg1 host:(id)arg2 ;
+(id)identityForXPCServiceProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 host:(id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)euid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)executablePath;
-(id)succinctDescription;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(NSString *)picoDesc;
-(id)processPredicate;
-(id)_initWithEmbeddedApplicationID:(id)arg1 xpcServiceID:(id)arg2 daemonJobLabel:(id)arg3 executablePath:(id)arg4 instanceID:(int)arg5 euid:(unsigned)arg6 ;
-(BOOL)isEmbeddedApplication;
-(BOOL)isDaemon;
-(BOOL)isXPCService;
-(BOOL)isAnonymousExecutable;
-(void)_initPicoDesc;
-(BOOL)isExtension;
-(BOOL)isDefaultManaged;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(NSString *)xpcServiceIdentifier;
-(RBSProcessIdentity *)hostIdentity;
-(RBSProcessIdentifier *)hostIdentifier;
-(BOOL)inheritsCoalitionBand;
-(NSString *)embeddedApplicationIdentifier;
-(NSString *)daemonJobLabel;
@end


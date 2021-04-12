/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, BBAppearance;

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {

	/*^block*/id _internalBlock;
	BOOL _deliverResponse;
	NSURL* _launchURL;
	NSString* _launchBundleID;
	BOOL _launchCanBypassPinLock;
	BOOL _authenticationRequired;
	BOOL _shouldDismissBulletin;
	NSString* _activatePluginName;
	NSDictionary* _activatePluginContext;
	long long _actionType;
	NSString* _identifier;
	BBAppearance* _appearance;
	unsigned long long _activationMode;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	long long _behavior;
	NSDictionary* _behaviorParameters;

}

@property (nonatomic,copy) id internalBlock;                                                           //@synthesize internalBlock=_internalBlock - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchAction; 
@property (nonatomic,readonly) BOOL hasPluginAction; 
@property (nonatomic,readonly) BOOL hasRemoteViewAction; 
@property (nonatomic,readonly) BOOL hasInteractiveAction; 
@property (assign,nonatomic) long long actionType;                                                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) BBAppearance * appearance;                                                  //@synthesize appearance=_appearance - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissBulletin;                                               //@synthesize shouldDismissBulletin=_shouldDismissBulletin - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                          //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * launchBundleID;                                                  //@synthesize launchBundleID=_launchBundleID - In the implementation block
@property (assign,nonatomic) BOOL launchCanBypassPinLock;                                              //@synthesize launchCanBypassPinLock=_launchCanBypassPinLock - In the implementation block
@property (assign,nonatomic) unsigned long long activationMode;                                        //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * activatePluginName;                                              //@synthesize activatePluginName=_activatePluginName - In the implementation block
@property (nonatomic,copy) NSDictionary * activatePluginContext;                                       //@synthesize activatePluginContext=_activatePluginContext - In the implementation block
@property (nonatomic,copy) NSString * remoteViewControllerClassName;                                   //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * remoteServiceBundleIdentifier;                                   //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long behavior;                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSDictionary * behaviorParameters;                                          //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock; 
+(BOOL)supportsSecureCoding;
+(id)action;
+(id)actionWithIdentifier:(id)arg1 ;
+(id)actionWithLaunchURL:(id)arg1 callblock:(/*^block*/id)arg2 ;
+(id)actionWithLaunchBundleID:(id)arg1 callblock:(/*^block*/id)arg2 ;
+(id)actionWithCallblock:(/*^block*/id)arg1 ;
+(id)actionWithAppearance:(id)arg1 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 ;
+(id)actionWithLaunchURL:(id)arg1 ;
+(id)actionWithLaunchBundleID:(id)arg1 ;
+(id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)url;
-(id)bundleID;
-(BBAppearance *)appearance;
-(void)setAppearance:(BBAppearance *)arg1 ;
-(unsigned long long)activationMode;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(long long)behavior;
-(void)setBehavior:(long long)arg1 ;
-(BOOL)isAuthenticationRequired;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(BOOL)canBypassPinLock;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(NSString *)launchBundleID;
-(void)setCallblock:(/*^block*/id)arg1 ;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(void)setActivatePluginName:(NSString *)arg1 ;
-(void)setActivatePluginContext:(NSDictionary *)arg1 ;
-(void)setInternalBlock:(id)arg1 ;
-(NSString *)activatePluginName;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(BOOL)hasRemoteViewAction;
-(BOOL)launchCanBypassPinLock;
-(void)setLaunchCanBypassPinLock:(BOOL)arg1 ;
-(id)internalBlock;
-(NSDictionary *)activatePluginContext;
-(id)_nameForActionType:(long long)arg1 ;
-(NSDictionary *)behaviorParameters;
-(BOOL)shouldDismissBulletin;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
-(void)setShouldDismissBulletin:(BOOL)arg1 ;
-(id)partialDescription;
-(BOOL)hasLaunchAction;
-(BOOL)hasPluginAction;
-(BOOL)hasInteractiveAction;
-(BOOL)deliverResponse:(id)arg1 ;
@end


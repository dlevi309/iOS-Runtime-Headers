/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class NSString, NSDictionary;

@interface SBUIBannerAction : NSObject {

	/*^block*/id _actionBlock;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	unsigned long long _behavior;
	unsigned long long _activationMode;
	NSString* _identifier;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) id actionBlock;                                        //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) NSString * remoteViewControllerClassName;              //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * remoteServiceBundleIdentifier;              //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                         //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long activationMode;                 //@synthesize activationMode=_activationMode - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned long long)activationMode;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(id)initWithActionBlock:(/*^block*/id)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned long long)arg5 behavior:(unsigned long long)arg6 parameters:(id)arg7 ;
@end


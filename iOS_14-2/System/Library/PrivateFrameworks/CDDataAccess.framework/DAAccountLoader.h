/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@class NSMutableDictionary;

@interface DAAccountLoader : NSObject {

	NSMutableDictionary* _acAccountTypeToAccountFrameworkSubpath;
	NSMutableDictionary* _acAccountTypeToAccountDaemonBundleSubpath;
	NSMutableDictionary* _acAccountTypeToClassNames;
	NSMutableDictionary* _acParentAccountTypeToChildAccountTypes;

}

@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToAccountFrameworkSubpath;                 //@synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToAccountDaemonBundleSubpath;              //@synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToClassNames;                              //@synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acParentAccountTypeToChildAccountTypes;                 //@synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes - In the implementation block
+(id)sharedInstance;
+(void)_findPrivateFrameworks;
-(id)init;
-(Class)daemonAppropriateAccountClassForACAccount:(id)arg1 ;
-(void)setAcAccountTypeToAccountFrameworkSubpath:(NSMutableDictionary *)arg1 ;
-(void)setAcAccountTypeToAccountDaemonBundleSubpath:(NSMutableDictionary *)arg1 ;
-(void)setAcAccountTypeToClassNames:(NSMutableDictionary *)arg1 ;
-(void)setAcParentAccountTypeToChildAccountTypes:(NSMutableDictionary *)arg1 ;
-(void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2 ;
-(BOOL)_loadFrameworkAtSubpath:(id)arg1 ;
-(void)loadFrameworkForACAccountType:(id)arg1 ;
-(void)loadDaemonBundleForACAccountType:(id)arg1 ;
-(Class)daemonAccountClassForACAccount:(id)arg1 ;
-(Class)clientAccountClassForACAccount:(id)arg1 ;
-(Class)accountClassForACAccount:(id)arg1 ;
-(Class)agentClassForACAccount:(id)arg1 ;
-(NSMutableDictionary *)acAccountTypeToAccountFrameworkSubpath;
-(NSMutableDictionary *)acAccountTypeToAccountDaemonBundleSubpath;
-(NSMutableDictionary *)acAccountTypeToClassNames;
-(NSMutableDictionary *)acParentAccountTypeToChildAccountTypes;
@end


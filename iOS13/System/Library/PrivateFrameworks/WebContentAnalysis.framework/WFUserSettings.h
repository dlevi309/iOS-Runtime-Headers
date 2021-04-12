/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSDictionary, NSString, WFWhitelistSiteBuffer, NSArray;

@interface WFUserSettings : NSObject {

	NSDictionary* _userSettings;
	NSString* _userName;
	WFWhitelistSiteBuffer* _contentFilterOverriddenWhiteListedSitesBuffer;
	WFWhitelistSiteBuffer* _contentFilterOverriddenBlackListedSitesBuffer;
	WFWhitelistSiteBuffer* _whiteListedSitesBuffer;

}

@property (nonatomic,copy) NSString * userName;                                                  //@synthesize userName=_userName - In the implementation block
@property (assign,nonatomic) long long restrictionType; 
@property (nonatomic,readonly) BOOL canEditRestrictionType; 
@property (nonatomic,retain) NSArray * contentFilterOverriddenWhiteListedSites; 
@property (nonatomic,readonly) BOOL canEditContentFilterOverriddenWhiteListedSites; 
@property (nonatomic,retain) NSArray * contentFilterOverriddenBlackListedSites; 
@property (nonatomic,readonly) BOOL canEditContentFilterOverriddenBlackListedSites; 
@property (nonatomic,retain) NSArray * whiteListAllowedSites; 
@property (nonatomic,readonly) BOOL canEditWhiteListAllowedSites; 
@property (assign,nonatomic) BOOL overridesAllowed; 
@property (nonatomic,readonly) BOOL canEditOverridesAllowed; 
+(id)metasitesPath;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg1 ;
+(id)metasitesExceptionPath;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
-(void)dealloc;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(id)initWithUserName:(id)arg1 ;
-(long long)restrictionType;
-(BOOL)alwaysAllowHTTPS;
-(void)setAlwaysAllowHTTPS:(BOOL)arg1 ;
-(BOOL)overridesAllowed;
-(BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg1 ;
-(BOOL)contentFilterEnabled;
-(BOOL)autoWhitelistContainsURL:(id)arg1 ;
-(BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg1 ;
-(BOOL)whiteListEnabled;
-(BOOL)whiteListContainsURL:(id)arg1 ;
-(id)_managedDefaultsPath;
-(BOOL)_setManagedDefaults:(id)arg1 ;
-(id)_userSettingsForUser:(id)arg1 ;
-(BOOL)_addManagedDefaults:(id)arg1 ;
-(void)setRestrictionType:(long long)arg1 ;
-(NSArray *)contentFilterOverriddenWhiteListedSites;
-(BOOL)contentFilterOverridesEnabled;
-(NSArray *)contentFilterOverriddenBlackListedSites;
-(NSArray *)whiteListAllowedSites;
-(id)contentFilterOverriddenWhiteListedSitesBuffer;
-(BOOL)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2 ;
-(id)contentFilterOverriddenBlackListedSitesBuffer;
-(id)whiteListedSitesBuffer;
-(BOOL)canEditRestrictionType;
-(id)contentFilterOverriddenSites;
-(void)setContentFilterOverriddenWhiteListedSites:(NSArray *)arg1 ;
-(BOOL)canEditContentFilterOverriddenWhiteListedSites;
-(void)setContentFilterOverriddenBlackListedSites:(NSArray *)arg1 ;
-(BOOL)canEditContentFilterOverriddenBlackListedSites;
-(void)setWhiteListAllowedSites:(NSArray *)arg1 ;
-(BOOL)canEditWhiteListAllowedSites;
-(void)setOverridesAllowed:(BOOL)arg1 ;
-(BOOL)canEditOverridesAllowed;
-(BOOL)canEditAlwaysAllowHTTPS;
-(BOOL)contentFilterListsAllowURL:(id)arg1 ;
-(BOOL)restrictWebEnabled;
-(void)setRestrictWebEnabled:(BOOL)arg1 ;
-(void)setContentFilterEnabled:(BOOL)arg1 ;
-(void)setContentFilterOverridesEnabled:(BOOL)arg1 ;
-(void)setWhiteListEnabled:(BOOL)arg1 ;
@end


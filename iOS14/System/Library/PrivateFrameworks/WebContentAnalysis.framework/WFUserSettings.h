/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWhiteListAllowedSites:(NSArray *)arg1 ;
-(BOOL)canEditWhiteListAllowedSites;
-(NSString *)userName;
-(BOOL)canEditRestrictionType;
-(BOOL)canEditContentFilterOverriddenWhiteListedSites;
-(id)whiteListedSitesBuffer;
-(void)setContentFilterOverriddenBlackListedSites:(NSArray *)arg1 ;
-(BOOL)alwaysAllowHTTPS;
-(long long)restrictionType;
-(id)initWithUserName:(id)arg1 ;
-(BOOL)whiteListEnabled;
-(void)setOverridesAllowed:(BOOL)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSArray *)whiteListAllowedSites;
-(BOOL)contentFilterOverridesEnabled;
-(BOOL)canEditContentFilterOverriddenBlackListedSites;
-(NSArray *)contentFilterOverriddenBlackListedSites;
-(BOOL)canEditOverridesAllowed;
-(BOOL)restrictWebEnabled;
-(BOOL)_addManagedDefaults:(id)arg1 ;
-(void)setAlwaysAllowHTTPS:(BOOL)arg1 ;
-(BOOL)canEditAlwaysAllowHTTPS;
-(id)contentFilterOverriddenSites;
-(void)setRestrictWebEnabled:(BOOL)arg1 ;
-(id)contentFilterOverriddenBlackListedSitesBuffer;
-(BOOL)contentFilterListsAllowURL:(id)arg1 ;
-(BOOL)contentFilterEnabled;
-(id)_managedDefaultsPath;
-(void)setRestrictionType:(long long)arg1 ;
-(BOOL)whiteListContainsURL:(id)arg1 ;
-(id)_userSettingsForUser:(id)arg1 ;
-(BOOL)overridesAllowed;
-(void)setContentFilterOverridesEnabled:(BOOL)arg1 ;
-(NSArray *)contentFilterOverriddenWhiteListedSites;
-(BOOL)_setManagedDefaults:(id)arg1 ;
-(BOOL)autoWhitelistContainsURL:(id)arg1 ;
-(id)contentFilterOverriddenWhiteListedSitesBuffer;
-(BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg1 ;
-(BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg1 ;
-(void)setContentFilterOverriddenWhiteListedSites:(NSArray *)arg1 ;
-(void)setWhiteListEnabled:(BOOL)arg1 ;
-(void)setContentFilterEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2 ;
@end


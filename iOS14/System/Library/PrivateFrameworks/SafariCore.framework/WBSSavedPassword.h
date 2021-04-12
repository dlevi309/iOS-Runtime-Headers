/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSDate, NSArray;

@interface WBSSavedPassword : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _siteToProtectionSpaces;
	NSMutableArray* _sites;
	BOOL _userIsNeverSaveMarker;
	NSString* _highLevelDomain;
	NSString* _user;
	NSString* _password;
	NSDate* _earliestModifiedDateForSites;
	NSArray* _persistentIdentifiersForWarningManager;

}

@property (nonatomic,retain) NSArray * persistentIdentifiersForWarningManager;              //@synthesize persistentIdentifiersForWarningManager=_persistentIdentifiersForWarningManager - In the implementation block
@property (nonatomic,readonly) NSString * highLevelDomain;                                  //@synthesize highLevelDomain=_highLevelDomain - In the implementation block
@property (nonatomic,readonly) NSString * user;                                             //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSArray * protectionSpaces; 
@property (nonatomic,readonly) BOOL userIsNeverSaveMarker;                                  //@synthesize userIsNeverSaveMarker=_userIsNeverSaveMarker - In the implementation block
@property (nonatomic,readonly) NSDate * earliestModifiedDateForSites;                       //@synthesize earliestModifiedDateForSites=_earliestModifiedDateForSites - In the implementation block
@property (nonatomic,readonly) NSArray * sites; 
@property (nonatomic,readonly) NSString * userVisibleHighLevelDomain; 
@property (nonatomic,readonly) NSArray * userVisibleSites; 
+(void)enumerateRangesMatchingPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(/*^block*/id)arg5 ;
+(BOOL)stringMatchesPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 ;
-(id)_firstSiteMatchingSearchPattern:(id)arg1 withTokenizer:(CFStringTokenizerRef)arg2 ;
-(void)safari_getTitle:(id*)arg1 detail:(id*)arg2 forTableViewCell:(id)arg3 withSearchPattern:(id)arg4 ;
-(NSArray *)sites;
-(long long)compare:(id)arg1 ;
-(NSString *)password;
-(id)description;
-(NSString *)user;
-(unsigned long long)hash;
-(NSArray *)protectionSpaces;
-(void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2 ;
-(void)_addModificationDate:(id)arg1 ;
-(BOOL)_matchesSearchPattern:(id)arg1 matchAgainstUser:(BOOL)arg2 associatedDomains:(id)arg3 ;
-(id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_addProtectionSpace:(id)arg1 forSite:(id)arg2 ;
-(BOOL)_containsProtectionSpace:(id)arg1 ;
-(void)_deleteCredentials;
-(void)_deleteCredentialsForSite:(id)arg1 ;
-(NSString *)highLevelDomain;
-(BOOL)userIsNeverSaveMarker;
-(BOOL)isDuplicateWithoutUserNameOfPassword:(id)arg1 ;
-(void)_setUser:(id)arg1 password:(id)arg2 ;
-(void)_adoptSitesFromSavedPassword:(id)arg1 ;
-(NSString *)userVisibleHighLevelDomain;
-(NSArray *)userVisibleSites;
-(BOOL)matchesUserTypedSearchPattern:(id)arg1 associatedDomains:(id)arg2 ;
-(BOOL)matchesServiceNameHintString:(id)arg1 ;
-(BOOL)matchesDomain:(id)arg1 associatedDomains:(id)arg2 ;
-(NSDate *)earliestModifiedDateForSites;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)persistentIdentifiersForWarningManager;
-(void)setPersistentIdentifiersForWarningManager:(NSArray *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSDate, NSArray;

@interface WBSSavedPassword : NSObject {

	NSMutableDictionary* _siteToProtectionSpaces;
	NSMutableArray* _sites;
	BOOL _userIsNeverSaveMarker;
	NSString* _highLevelDomain;
	NSString* _user;
	NSString* _password;
	NSDate* _earliestModifiedDateForSites;

}

@property (nonatomic,readonly) NSString * highLevelDomain;                         //@synthesize highLevelDomain=_highLevelDomain - In the implementation block
@property (nonatomic,readonly) NSString * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSArray * protectionSpaces; 
@property (nonatomic,readonly) BOOL userIsNeverSaveMarker;                         //@synthesize userIsNeverSaveMarker=_userIsNeverSaveMarker - In the implementation block
@property (nonatomic,readonly) NSDate * earliestModifiedDateForSites;              //@synthesize earliestModifiedDateForSites=_earliestModifiedDateForSites - In the implementation block
@property (nonatomic,readonly) NSArray * sites; 
@property (nonatomic,readonly) NSString * userVisibleHighLevelDomain; 
@property (nonatomic,readonly) NSArray * userVisibleSites; 
+(BOOL)stringMatchesPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 ;
+(void)enumerateRangesMatchingPatternWithTokenizer:(CFStringTokenizerRef)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)_firstSiteMatchingSearchPattern:(id)arg1 withTokenizer:(CFStringTokenizerRef)arg2 ;
-(void)safari_getTitle:(id*)arg1 detail:(id*)arg2 forTableViewCell:(id)arg3 withSearchPattern:(id)arg4 warningImage:(id)arg5 leftToRight:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)user;
-(long long)compare:(id)arg1 ;
-(NSString *)password;
-(NSString *)highLevelDomain;
-(NSString *)userVisibleHighLevelDomain;
-(NSArray *)protectionSpaces;
-(BOOL)matchesUserTypedSearchPattern:(id)arg1 associatedDomains:(id)arg2 ;
-(NSArray *)sites;
-(NSDate *)earliestModifiedDateForSites;
-(NSArray *)userVisibleSites;
-(BOOL)userIsNeverSaveMarker;
-(BOOL)matchesServiceNameHintString:(id)arg1 ;
-(void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2 ;
-(BOOL)_matchesSearchPattern:(id)arg1 matchAgainstUser:(BOOL)arg2 associatedDomains:(id)arg3 ;
-(id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_addProtectionSpace:(id)arg1 forSite:(id)arg2 ;
-(void)_addModificationDate:(id)arg1 ;
-(BOOL)_containsProtectionSpace:(id)arg1 ;
-(void)_deleteCredentials;
-(void)_deleteCredentialsForSite:(id)arg1 ;
-(BOOL)isDuplicateWithoutUserNameOfPassword:(id)arg1 ;
-(void)_setUser:(id)arg1 password:(id)arg2 ;
-(void)_adoptSitesFromSavedPassword:(id)arg1 ;
-(BOOL)matchesDomain:(id)arg1 associatedDomains:(id)arg2 ;
@end


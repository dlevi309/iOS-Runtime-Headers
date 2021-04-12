/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSData, NSDate, NSMutableArray;

@interface SOKerberosRealmSettings : NSObject <NSSecureCoding> {

	NSString* _userPrincipalName;
	NSString* _userName;
	NSUUID* _credentialUUID;
	NSString* _cacheName;
	NSData* _smartCardIssuer;
	NSData* _smartCardSerialNumber;
	NSString* _smartCardTokenID;
	NSDate* _dateLastLogin;
	NSString* _datePasswordLastChanged;
	NSString* _dateLocalPasswordLastChanged;
	NSString* _datePasswordExpires;
	NSString* _networkHomeDirectory;
	NSMutableArray* _siteCodeCache;

}

@property (nonatomic,retain) NSMutableArray * siteCodeCache;                       //@synthesize siteCodeCache=_siteCodeCache - In the implementation block
@property (nonatomic,retain) NSString * userPrincipalName;                         //@synthesize userPrincipalName=_userPrincipalName - In the implementation block
@property (nonatomic,retain) NSString * userName;                                  //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSUUID * credentialUUID;                              //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (nonatomic,retain) NSString * cacheName;                                 //@synthesize cacheName=_cacheName - In the implementation block
@property (nonatomic,retain) NSData * smartCardIssuer;                             //@synthesize smartCardIssuer=_smartCardIssuer - In the implementation block
@property (nonatomic,retain) NSData * smartCardSerialNumber;                       //@synthesize smartCardSerialNumber=_smartCardSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * smartCardTokenID;                          //@synthesize smartCardTokenID=_smartCardTokenID - In the implementation block
@property (nonatomic,retain) NSDate * dateLastLogin;                               //@synthesize dateLastLogin=_dateLastLogin - In the implementation block
@property (nonatomic,retain) NSString * datePasswordLastChanged;                   //@synthesize datePasswordLastChanged=_datePasswordLastChanged - In the implementation block
@property (nonatomic,retain) NSString * dateLocalPasswordLastChanged;              //@synthesize dateLocalPasswordLastChanged=_dateLocalPasswordLastChanged - In the implementation block
@property (nonatomic,retain) NSString * datePasswordExpires;                       //@synthesize datePasswordExpires=_datePasswordExpires - In the implementation block
@property (nonatomic,retain) NSString * networkHomeDirectory;                      //@synthesize networkHomeDirectory=_networkHomeDirectory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)userName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)credentialUUID;
-(void)setCredentialUUID:(NSUUID *)arg1 ;
-(NSString *)cacheName;
-(void)setUserName:(NSString *)arg1 ;
-(void)setCacheName:(NSString *)arg1 ;
-(NSMutableArray *)siteCodeCache;
-(NSString *)userPrincipalName;
-(NSData *)smartCardIssuer;
-(NSData *)smartCardSerialNumber;
-(NSString *)smartCardTokenID;
-(NSDate *)dateLastLogin;
-(NSString *)datePasswordLastChanged;
-(NSString *)dateLocalPasswordLastChanged;
-(NSString *)datePasswordExpires;
-(NSString *)networkHomeDirectory;
-(id)dumpSiteCodeCache;
-(void)cacheSiteCode:(id)arg1 ;
-(id)siteCodeForNetworkFingerprint:(id)arg1 ;
-(void)setUserPrincipalName:(NSString *)arg1 ;
-(void)setSmartCardIssuer:(NSData *)arg1 ;
-(void)setSmartCardSerialNumber:(NSData *)arg1 ;
-(void)setSmartCardTokenID:(NSString *)arg1 ;
-(void)setDateLastLogin:(NSDate *)arg1 ;
-(void)setDatePasswordLastChanged:(NSString *)arg1 ;
-(void)setDateLocalPasswordLastChanged:(NSString *)arg1 ;
-(void)setDatePasswordExpires:(NSString *)arg1 ;
-(void)setNetworkHomeDirectory:(NSString *)arg1 ;
-(void)setSiteCodeCache:(NSMutableArray *)arg1 ;
@end


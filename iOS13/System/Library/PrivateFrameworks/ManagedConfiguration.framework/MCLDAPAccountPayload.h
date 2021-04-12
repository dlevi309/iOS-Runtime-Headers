/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSArray, NSDictionary, NSNumber;

@interface MCLDAPAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	BOOL _useSSL;
	NSArray* _searchSettings;
	NSString* _accountPersistentUUID;
	NSDictionary* _communicationServiceRules;
	NSNumber* _useSSLNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                                  //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                            //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * username;                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                     //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSArray * searchSettings;                       //@synthesize searchSettings=_searchSettings - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                           //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;              //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                          //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)title;
-(NSString *)hostname;
-(NSString *)username;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSDictionary *)communicationServiceRules;
-(NSString *)accountDescription;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)useSSL;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSArray *)searchSettings;
@end


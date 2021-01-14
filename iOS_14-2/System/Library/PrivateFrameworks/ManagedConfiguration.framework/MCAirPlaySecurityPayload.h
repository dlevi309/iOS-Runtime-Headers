/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload {

	NSString* _accessType;
	NSString* _securityType;
	NSString* _password;

}

@property (nonatomic,retain) NSString * accessType;                //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,retain) NSString * securityType;              //@synthesize securityType=_securityType - In the implementation block
@property (nonatomic,retain) NSString * password;                  //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSString *)securityType;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setSecurityType:(NSString *)arg1 ;
-(NSString *)password;
-(void)setAccessType:(NSString *)arg1 ;
-(id)verboseDescription;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accessType;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
@end


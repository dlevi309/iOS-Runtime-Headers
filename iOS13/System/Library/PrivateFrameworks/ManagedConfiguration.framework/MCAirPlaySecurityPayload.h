/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAccessType:(NSString *)arg1 ;
-(NSString *)accessType;
-(void)setSecurityType:(NSString *)arg1 ;
-(NSString *)securityType;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSString, ACAccount;


@protocol EDAccount <ECMailAccount>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@required
-(id)username;
-(id)hostname;
-(ACAccount *)systemAccount;
-(BOOL)canAuthenticateWithCurrentCredentials;
-(BOOL)hasPasswordCredential;
-(void)savePersistentAccount;
-(NSString *)statisticsKind;
-(BOOL)primaryiCloudAccount;
-(NSString *)identifier;
-(id)displayName;

@end


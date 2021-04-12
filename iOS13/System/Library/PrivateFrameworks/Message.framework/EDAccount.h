/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSString, ACAccount;


@protocol EDAccount <ECMailAccount>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@required
-(NSString *)identifier;
-(id)displayName;
-(id)hostname;
-(id)username;
-(BOOL)primaryiCloudAccount;
-(ACAccount *)systemAccount;
-(BOOL)canAuthenticateWithCurrentCredentials;
-(BOOL)hasPasswordCredential;
-(void)savePersistentAccount;
-(NSString *)statisticsKind;

@end


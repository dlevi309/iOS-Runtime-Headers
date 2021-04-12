/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@class NSString;

@interface FPUIAuthenticationCredentials : NSObject {

	unsigned long long _type;
	NSString* _username;
	NSString* _password;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                    //@synthesize password=_password - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
@end


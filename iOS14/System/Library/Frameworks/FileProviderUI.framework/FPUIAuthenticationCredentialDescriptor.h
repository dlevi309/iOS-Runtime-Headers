/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@class NSString;

@interface FPUIAuthenticationCredentialDescriptor : NSObject {

	unsigned long long _type;
	NSString* _username;
	NSString* _password;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                    //@synthesize password=_password - In the implementation block
-(void)setUsername:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)type;
@end


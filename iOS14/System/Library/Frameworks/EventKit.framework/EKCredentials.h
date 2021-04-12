/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSString;

@interface EKCredentials : NSObject {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)credentialsWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)password;
-(NSString *)username;
-(id)description;
@end


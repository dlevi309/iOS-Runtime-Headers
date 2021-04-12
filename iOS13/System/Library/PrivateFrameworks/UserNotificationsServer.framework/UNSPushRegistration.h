/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface UNSPushRegistration : NSObject <NSCopying> {

	NSString* _environment;
	NSData* _token;
	NSString* _tokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSData * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenIdentifier;              //@synthesize tokenIdentifier=_tokenIdentifier - In the implementation block
+(id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)tokenIdentifier;
-(id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
@end


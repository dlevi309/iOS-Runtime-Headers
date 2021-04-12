/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)environment;
-(id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
-(NSData *)token;
-(NSString *)tokenIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


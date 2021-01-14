/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayName;

}

@property (copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (copy,readonly) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (copy,readonly) NSString * service;                     //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
+(id)emptySocialProfile;
-(NSString *)urlString;
-(NSString *)userIdentifier;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5 ;
-(NSString *)username;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
@end


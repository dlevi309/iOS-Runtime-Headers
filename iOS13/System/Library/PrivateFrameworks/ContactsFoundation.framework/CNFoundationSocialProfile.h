/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSString *)userIdentifier;
-(NSString *)displayName;
-(NSString *)username;
-(NSString *)service;
-(NSString *)urlString;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5 ;
@end


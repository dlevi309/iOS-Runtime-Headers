/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SFSafariPasswordCredential;
@class NSString, NSDate;

@interface SFSafariCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSString* _site;
	NSDate* _creationDate;
	id<SFSafariPasswordCredential> _externalCredential;

}

@property (nonatomic,readonly) id<SFSafariPasswordCredential> externalCredential;              //@synthesize externalCredential=_externalCredential - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                                                //@synthesize site=_site - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
+(BOOL)supportsSecureCoding;
-(NSString *)site;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(id)description;
-(id<SFSafariPasswordCredential>)externalCredential;
-(NSDate *)creationDate;
-(NSString *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 ;
-(BOOL)isExternal;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExternalCredential:(id)arg1 ;
@end


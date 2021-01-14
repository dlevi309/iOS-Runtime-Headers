/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, NSDate, CLSocket;

@interface CLAccount : NSObject <NSCopying, NSCoding> {

	NSURL* _domain;
	NSURL* _domainHomePage;
	BOOL _alphaUser;
	BOOL _uploadsArePrivate;
	NSString* _email;
	NSDate* _subscriptionExpiresAt;
	long long _type;
	CLSocket* _socket;

}

@property (nonatomic,retain) NSURL * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSURL * domainHomePage;                         //@synthesize domainHomePage=_domainHomePage - In the implementation block
@property (assign,getter=isAlphaUser,nonatomic) BOOL alphaUser;              //@synthesize alphaUser=_alphaUser - In the implementation block
@property (assign,nonatomic) BOOL uploadsArePrivate;                         //@synthesize uploadsArePrivate=_uploadsArePrivate - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionExpiresAt;                 //@synthesize subscriptionExpiresAt=_subscriptionExpiresAt - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CLSocket * socket;                              //@synthesize socket=_socket - In the implementation block
+(id)accountWithEmail:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(id)init;
-(CLSocket *)socket;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomain:(NSURL *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSURL *)domain;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setSocket:(CLSocket *)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(NSString *)email;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)uploadsArePrivate;
-(void)setUploadsArePrivate:(BOOL)arg1 ;
-(NSDate *)subscriptionExpiresAt;
-(void)setSubscriptionExpiresAt:(NSDate *)arg1 ;
-(NSURL *)domainHomePage;
-(void)setDomainHomePage:(NSURL *)arg1 ;
-(BOOL)isAlphaUser;
-(void)setAlphaUser:(BOOL)arg1 ;
@end


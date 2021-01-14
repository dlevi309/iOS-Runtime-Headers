/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _appleIDAuth;
	BOOL _createAppleID;
	NSString* _user;
	NSString* _site;

}

@property (nonatomic,copy) NSString * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * site;                                               //@synthesize site=_site - In the implementation block
@property (assign,getter=isAppleIDAuthorization,nonatomic) BOOL appleIDAuth;              //@synthesize appleIDAuth=_appleIDAuth - In the implementation block
@property (assign,getter=shouldCreateAppleID,nonatomic) BOOL createAppleID;               //@synthesize createAppleID=_createAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)site;
-(void)setUser:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 site:(id)arg2 ;
-(BOOL)isAppleIDAuthorization;
-(void)setAppleIDAuth:(BOOL)arg1 ;
-(BOOL)shouldCreateAppleID;
-(void)setCreateAppleID:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)user;
-(void)setSite:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding> {

	long long _action;
	NSString* _userString;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * userString;                //@synthesize userString=_userString - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)userString;
-(id)initWithClassificationAction:(long long)arg1 ;
-(void)setUserString:(NSString *)arg1 ;
@end


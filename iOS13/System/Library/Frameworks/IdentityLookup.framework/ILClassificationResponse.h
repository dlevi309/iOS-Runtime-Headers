/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(long long)action;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(NSString *)userString;
-(id)initWithClassificationAction:(long long)arg1 ;
-(void)setUserString:(NSString *)arg1 ;
@end


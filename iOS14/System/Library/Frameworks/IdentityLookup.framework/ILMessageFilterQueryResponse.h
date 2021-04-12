/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding> {

	long long _action;
	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long action;              //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToQueryResponse:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(BOOL)isEqualToQueryResponse:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding> {

	NSString* _prefix;
	NSString* _category;

}

@property (nonatomic,copy) NSString * prefix;                //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ruleWithPrefix:(id)arg1 category:(id)arg2 ;
-(NSString *)prefix;
-(void)setCategory:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(void)setPrefix:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToCategoryRule:(id)arg1 ;
@end


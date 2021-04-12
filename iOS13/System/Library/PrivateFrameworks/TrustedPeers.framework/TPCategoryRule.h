/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)isEqualToCategoryRule:(id)arg1 ;
@end


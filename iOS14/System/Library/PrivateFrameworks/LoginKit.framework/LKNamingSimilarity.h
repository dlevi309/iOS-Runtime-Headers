/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LKNamingSimilarity : NSObject <NSSecureCoding> {

	unsigned long long _similarity;

}

@property (assign,nonatomic) unsigned long long similarity;              //@synthesize similarity=_similarity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namingSimilarityWithSimilarity:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)similarity;
-(void)setSimilarity:(unsigned long long)arg1 ;
-(BOOL)isEqualToLKNamingSimilarity:(id)arg1 ;
@end


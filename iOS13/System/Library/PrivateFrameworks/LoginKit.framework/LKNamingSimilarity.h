/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSimilarity:(unsigned long long)arg1 ;
-(unsigned long long)similarity;
-(BOOL)isEqualToLKNamingSimilarity:(id)arg1 ;
@end


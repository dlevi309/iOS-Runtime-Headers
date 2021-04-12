/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding> {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;               //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) BOOL isLeft; 
@property (nonatomic,readonly) BOOL isRight; 
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(BOOL)supportsSecureCoding;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
+(id)firstLeftInLazyChain:(id)arg1 ;
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithRight:(id)arg1 ;
-(id)left;
-(id)right;
-(void)encodeWithCoder:(id)arg1 ;
-(CNPair *)pair;
-(id)description;
-(void)setPair:(CNPair *)arg1 ;
-(BOOL)isLeft;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRight;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)eitherWithRight:(id)arg1 ;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
+(id)firstLeftInLazyChain:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPair *)pair;
-(id)left;
-(BOOL)isLeft;
-(id)right;
-(BOOL)isRight;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(void)setPair:(CNPair *)arg1 ;
@end


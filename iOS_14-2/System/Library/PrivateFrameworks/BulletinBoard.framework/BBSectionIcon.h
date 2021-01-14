/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _variants;

}

@property (nonatomic,copy) NSSet * variants;              //@synthesize variants=_variants - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)variants;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVariants:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)addVariant:(id)arg1 ;
-(id)_bestVariantForFormat:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


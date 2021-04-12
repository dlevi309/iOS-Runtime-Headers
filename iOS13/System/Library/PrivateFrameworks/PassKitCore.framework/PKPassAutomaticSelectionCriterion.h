/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSData;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsExpress;
	NSString* _type;
	long long _technologyType;
	NSSet* _primaryTCIs;
	NSSet* _TCIs;
	NSData* _mask;

}

@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long technologyType;              //@synthesize technologyType=_technologyType - In the implementation block
@property (assign,nonatomic) BOOL supportsExpress;                  //@synthesize supportsExpress=_supportsExpress - In the implementation block
@property (nonatomic,copy) NSSet * primaryTCIs;                     //@synthesize primaryTCIs=_primaryTCIs - In the implementation block
@property (nonatomic,copy) NSSet * TCIs;                            //@synthesize TCIs=_TCIs - In the implementation block
@property (nonatomic,copy) NSData * mask;                           //@synthesize mask=_mask - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)criterionForExpressMode:(id)arg1 ;
+(id)expressModeForCriterion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)mask;
-(void)setMask:(NSData *)arg1 ;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(BOOL)supportsExpress;
-(id)asDictionary;
-(void)setSupportsExpress:(BOOL)arg1 ;
-(NSSet *)primaryTCIs;
-(void)setPrimaryTCIs:(NSSet *)arg1 ;
-(NSSet *)TCIs;
-(void)setTCIs:(NSSet *)arg1 ;
@end


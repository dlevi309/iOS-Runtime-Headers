/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSData;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsExpress;
	BOOL _supportsInSessionExpress;
	NSString* _type;
	long long _technologyType;
	NSSet* _primaryTCIs;
	NSSet* _TCIs;
	NSData* _mask;

}

@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long technologyType;                   //@synthesize technologyType=_technologyType - In the implementation block
@property (assign,nonatomic) BOOL supportsExpress;                       //@synthesize supportsExpress=_supportsExpress - In the implementation block
@property (nonatomic,copy) NSSet * primaryTCIs;                          //@synthesize primaryTCIs=_primaryTCIs - In the implementation block
@property (nonatomic,copy) NSSet * TCIs;                                 //@synthesize TCIs=_TCIs - In the implementation block
@property (assign,nonatomic) BOOL supportsInSessionExpress;              //@synthesize supportsInSessionExpress=_supportsInSessionExpress - In the implementation block
@property (nonatomic,copy) NSData * mask;                                //@synthesize mask=_mask - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)expressModeForCriterion:(id)arg1 ;
+(id)criterionForExpressMode:(id)arg1 ;
-(NSData *)mask;
-(NSSet *)TCIs;
-(id)asDictionary;
-(void)setMask:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTCIs:(NSSet *)arg1 ;
-(id)description;
-(void)setPrimaryTCIs:(NSSet *)arg1 ;
-(void)setSupportsExpress:(BOOL)arg1 ;
-(BOOL)supportsInSessionExpress;
-(void)setSupportsInSessionExpress:(BOOL)arg1 ;
-(NSSet *)primaryTCIs;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(BOOL)supportsExpress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPThrottlingConfigCriteria, NSString, CKDPThrottlingConfigRateLimit;

@interface CKDPThrottlingConfig : PBCodable <NSCopying> {

	CKDPThrottlingConfigCriteria* _criteria;
	NSString* _label;
	CKDPThrottlingConfigRateLimit* _rateLimit;
	int _ttlSec;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasCriteria; 
@property (nonatomic,retain) CKDPThrottlingConfigCriteria * criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) BOOL hasRateLimit; 
@property (nonatomic,retain) CKDPThrottlingConfigRateLimit * rateLimit;              //@synthesize rateLimit=_rateLimit - In the implementation block
@property (assign,nonatomic) BOOL hasTtlSec; 
@property (assign,nonatomic) int ttlSec;                                             //@synthesize ttlSec=_ttlSec - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCriteria:(CKDPThrottlingConfigCriteria *)arg1 ;
-(BOOL)hasLabel;
-(void)mergeFrom:(id)arg1 ;
-(int)ttlSec;
-(id)description;
-(CKDPThrottlingConfigCriteria *)criteria;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCriteria;
-(void)setRateLimit:(CKDPThrottlingConfigRateLimit *)arg1 ;
-(BOOL)hasRateLimit;
-(void)setTtlSec:(int)arg1 ;
-(void)setHasTtlSec:(BOOL)arg1 ;
-(BOOL)hasTtlSec;
-(CKDPThrottlingConfigRateLimit *)rateLimit;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMAntSelPolicyStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _issueBand;
	unsigned _issueType;
	BOOL _hasAntConstraint;
	BOOL _isCoexBand;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIssueBand; 
@property (assign,nonatomic) unsigned issueBand;                        //@synthesize issueBand=_issueBand - In the implementation block
@property (assign,nonatomic) BOOL hasIssueType; 
@property (assign,nonatomic) unsigned issueType;                        //@synthesize issueType=_issueType - In the implementation block
@property (assign,nonatomic) BOOL hasIsCoexBand; 
@property (assign,nonatomic) BOOL isCoexBand;                           //@synthesize isCoexBand=_isCoexBand - In the implementation block
@property (assign,nonatomic) BOOL hasHasAntConstraint; 
@property (assign,nonatomic) BOOL hasAntConstraint;                     //@synthesize hasAntConstraint=_hasAntConstraint - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIssueType:(unsigned)arg1 ;
-(void)setHasIssueType:(BOOL)arg1 ;
-(BOOL)hasIssueType;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)issueType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIssueBand:(unsigned)arg1 ;
-(void)setHasIssueBand:(BOOL)arg1 ;
-(BOOL)hasIssueBand;
-(void)setIsCoexBand:(BOOL)arg1 ;
-(void)setHasIsCoexBand:(BOOL)arg1 ;
-(BOOL)hasIsCoexBand;
-(void)setHasAntConstraint:(BOOL)arg1 ;
-(void)setHasHasAntConstraint:(BOOL)arg1 ;
-(BOOL)hasHasAntConstraint;
-(unsigned)issueBand;
-(BOOL)isCoexBand;
-(BOOL)hasAntConstraint;
@end


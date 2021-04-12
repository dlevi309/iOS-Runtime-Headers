/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _corrects;
	int _incorrects;
	int _invalids;
	NSString* _keyword;
	int _unknowns;
	SCD_Struct_AW1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasKeyword; 
@property (nonatomic,retain) NSString * keyword;                    //@synthesize keyword=_keyword - In the implementation block
@property (assign,nonatomic) BOOL hasCorrects; 
@property (assign,nonatomic) int corrects;                          //@synthesize corrects=_corrects - In the implementation block
@property (assign,nonatomic) BOOL hasIncorrects; 
@property (assign,nonatomic) int incorrects;                        //@synthesize incorrects=_incorrects - In the implementation block
@property (assign,nonatomic) BOOL hasUnknowns; 
@property (assign,nonatomic) int unknowns;                          //@synthesize unknowns=_unknowns - In the implementation block
@property (assign,nonatomic) BOOL hasInvalids; 
@property (assign,nonatomic) int invalids;                          //@synthesize invalids=_invalids - In the implementation block
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setKeyword:(NSString *)arg1 ;
-(NSString *)keyword;
-(BOOL)hasKeyword;
-(int)corrects;
-(int)incorrects;
-(int)unknowns;
-(void)setCorrects:(int)arg1 ;
-(void)setIncorrects:(int)arg1 ;
-(void)setUnknowns:(int)arg1 ;
-(void)setInvalids:(int)arg1 ;
-(void)setHasCorrects:(BOOL)arg1 ;
-(BOOL)hasCorrects;
-(void)setHasIncorrects:(BOOL)arg1 ;
-(BOOL)hasIncorrects;
-(void)setHasUnknowns:(BOOL)arg1 ;
-(BOOL)hasUnknowns;
-(void)setHasInvalids:(BOOL)arg1 ;
-(BOOL)hasInvalids;
-(int)invalids;
@end


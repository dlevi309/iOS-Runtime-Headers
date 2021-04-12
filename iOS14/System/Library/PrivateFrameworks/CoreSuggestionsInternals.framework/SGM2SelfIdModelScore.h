/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2SelfIdModelScore : PBCodable <NSCopying> {

	NSString* _key;
	int _model;
	int _supervision;
	BOOL _result;
	SCD_Struct_SG1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasModel; 
@property (assign,nonatomic) int model;                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) BOOL result;                      //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasSupervision; 
@property (assign,nonatomic) int supervision;                  //@synthesize supervision=_supervision - In the implementation block
-(BOOL)hasKey;
-(void)setResult:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(int)model;
-(BOOL)hasModel;
-(void)setHasResult:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setModel:(int)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasModel:(BOOL)arg1 ;
-(id)modelAsString:(int)arg1 ;
-(int)StringAsModel:(id)arg1 ;
-(int)supervision;
-(void)setSupervision:(int)arg1 ;
-(void)setHasSupervision:(BOOL)arg1 ;
-(BOOL)hasSupervision;
-(id)supervisionAsString:(int)arg1 ;
-(int)StringAsSupervision:(id)arg1 ;
@end


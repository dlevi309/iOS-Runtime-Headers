/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactDetailExtraction : PBCodable <NSCopying> {

	int _detail;
	unsigned _extractionModelVersion;
	int _extractionSignatureSource;
	int _foundInSenderCNContact;
	NSString* _key;
	int _outcome;
	int _source;
	BOOL _isUnlikelyPhone;
	BOOL _signature;
	SCD_Struct_SG4 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasSignature; 
@property (assign,nonatomic) BOOL signature;                                 //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasDetail; 
@property (assign,nonatomic) int detail;                                     //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL hasOutcome; 
@property (assign,nonatomic) int outcome;                                    //@synthesize outcome=_outcome - In the implementation block
@property (assign,nonatomic) BOOL hasFoundInSenderCNContact; 
@property (assign,nonatomic) int foundInSenderCNContact;                     //@synthesize foundInSenderCNContact=_foundInSenderCNContact - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionModelVersion; 
@property (assign,nonatomic) unsigned extractionModelVersion;                //@synthesize extractionModelVersion=_extractionModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsUnlikelyPhone; 
@property (assign,nonatomic) BOOL isUnlikelyPhone;                           //@synthesize isUnlikelyPhone=_isUnlikelyPhone - In the implementation block
@property (assign,nonatomic) BOOL hasExtractionSignatureSource; 
@property (assign,nonatomic) int extractionSignatureSource;                  //@synthesize extractionSignatureSource=_extractionSignatureSource - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)signature;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(int)detail;
-(BOOL)hasSignature;
-(BOOL)hasDetail;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOutcome:(BOOL)arg1 ;
-(BOOL)hasOutcome;
-(id)outcomeAsString:(int)arg1 ;
-(int)StringAsOutcome:(id)arg1 ;
-(void)setExtractionModelVersion:(unsigned)arg1 ;
-(void)setHasExtractionModelVersion:(BOOL)arg1 ;
-(BOOL)hasExtractionModelVersion;
-(unsigned)extractionModelVersion;
-(void)setSource:(int)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDetail:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignature:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(void)setHasSignature:(BOOL)arg1 ;
-(void)setHasDetail:(BOOL)arg1 ;
-(id)detailAsString:(int)arg1 ;
-(int)StringAsDetail:(id)arg1 ;
-(int)foundInSenderCNContact;
-(void)setFoundInSenderCNContact:(int)arg1 ;
-(void)setHasFoundInSenderCNContact:(BOOL)arg1 ;
-(BOOL)hasFoundInSenderCNContact;
-(id)foundInSenderCNContactAsString:(int)arg1 ;
-(int)StringAsFoundInSenderCNContact:(id)arg1 ;
-(void)setIsUnlikelyPhone:(BOOL)arg1 ;
-(void)setHasIsUnlikelyPhone:(BOOL)arg1 ;
-(BOOL)hasIsUnlikelyPhone;
-(int)extractionSignatureSource;
-(void)setExtractionSignatureSource:(int)arg1 ;
-(void)setHasExtractionSignatureSource:(BOOL)arg1 ;
-(BOOL)hasExtractionSignatureSource;
-(id)extractionSignatureSourceAsString:(int)arg1 ;
-(int)StringAsExtractionSignatureSource:(id)arg1 ;
-(BOOL)isUnlikelyPhone;
@end


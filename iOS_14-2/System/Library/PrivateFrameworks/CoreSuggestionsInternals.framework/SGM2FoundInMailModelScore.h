/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2FoundInMailModelScore : PBCodable <NSCopying> {

	int _contactDetail;
	NSString* _key;
	int _mode;
	int _model;
	int _supervision;
	BOOL _correct;
	BOOL _result;
	SCD_Struct_SG6 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasModel; 
@property (assign,nonatomic) int model;                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasContactDetail; 
@property (assign,nonatomic) int contactDetail;                  //@synthesize contactDetail=_contactDetail - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) BOOL result;                        //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasCorrect; 
@property (assign,nonatomic) BOOL correct;                       //@synthesize correct=_correct - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasSupervision; 
@property (assign,nonatomic) int supervision;                    //@synthesize supervision=_supervision - In the implementation block
-(BOOL)hasKey;
-(void)setResult:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(int)mode;
-(int)model;
-(BOOL)hasMode;
-(BOOL)hasModel;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)correct;
-(void)mergeFrom:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(id)description;
-(void)setModel:(int)arg1 ;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
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
-(int)contactDetail;
-(void)setContactDetail:(int)arg1 ;
-(void)setHasContactDetail:(BOOL)arg1 ;
-(BOOL)hasContactDetail;
-(id)contactDetailAsString:(int)arg1 ;
-(int)StringAsContactDetail:(id)arg1 ;
-(void)setCorrect:(BOOL)arg1 ;
-(void)setHasCorrect:(BOOL)arg1 ;
-(BOOL)hasCorrect;
@end


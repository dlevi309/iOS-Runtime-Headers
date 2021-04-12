/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAlternateHeadline : PBCodable <NSCopying> {

	int _articleHeadlineTreatmentId;
	int _articleHeadlineTreatmentState;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentState; 
@property (assign,nonatomic) int articleHeadlineTreatmentState;                  //@synthesize articleHeadlineTreatmentState=_articleHeadlineTreatmentState - In the implementation block
@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentId; 
@property (assign,nonatomic) int articleHeadlineTreatmentId;                     //@synthesize articleHeadlineTreatmentId=_articleHeadlineTreatmentId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasArticleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentId:(int)arg1 ;
-(void)setHasArticleHeadlineTreatmentState:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setArticleHeadlineTreatmentState:(int)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentId;
-(int)articleHeadlineTreatmentState;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasArticleHeadlineTreatmentId:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)articleHeadlineTreatmentId;
-(BOOL)isEqual:(id)arg1 ;
@end


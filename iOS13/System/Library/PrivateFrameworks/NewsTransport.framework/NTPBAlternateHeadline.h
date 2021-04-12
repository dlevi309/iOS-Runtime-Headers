/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAlternateHeadline : PBCodable <NSCopying> {

	int _articleHeadlineTreatmentId;
	int _articleHeadlineTreatmentState;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentState; 
@property (assign,nonatomic) int articleHeadlineTreatmentState;                  //@synthesize articleHeadlineTreatmentState=_articleHeadlineTreatmentState - In the implementation block
@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentId; 
@property (assign,nonatomic) int articleHeadlineTreatmentId;                     //@synthesize articleHeadlineTreatmentId=_articleHeadlineTreatmentId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)articleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentState:(int)arg1 ;
-(void)setHasArticleHeadlineTreatmentState:(BOOL)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentId:(int)arg1 ;
-(void)setHasArticleHeadlineTreatmentId:(BOOL)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentId;
-(int)articleHeadlineTreatmentId;
@end


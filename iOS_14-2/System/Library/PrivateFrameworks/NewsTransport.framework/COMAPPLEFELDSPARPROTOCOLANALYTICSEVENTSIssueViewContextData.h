/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable <NSCopying> {

	int _issueViewContext;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasIssueViewContext; 
@property (assign,nonatomic) int issueViewContext;                  //@synthesize issueViewContext=_issueViewContext - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)issueViewContext;
-(void)setIssueViewContext:(int)arg1 ;
-(void)setHasIssueViewContext:(BOOL)arg1 ;
-(BOOL)hasIssueViewContext;
-(id)issueViewContextAsString:(int)arg1 ;
-(int)StringAsIssueViewContext:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


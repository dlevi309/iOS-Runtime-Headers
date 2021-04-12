/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {

	int _cancelLocation;
	int _reportConcernLocation;
	int _resultType;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasReportConcernLocation; 
@property (assign,nonatomic) int reportConcernLocation;                  //@synthesize reportConcernLocation=_reportConcernLocation - In the implementation block
@property (assign,nonatomic) BOOL hasCancelLocation; 
@property (assign,nonatomic) int cancelLocation;                         //@synthesize cancelLocation=_cancelLocation - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(int)reportConcernLocation;
-(void)setReportConcernLocation:(int)arg1 ;
-(void)setHasReportConcernLocation:(BOOL)arg1 ;
-(BOOL)hasReportConcernLocation;
-(int)cancelLocation;
-(void)setCancelLocation:(int)arg1 ;
-(void)setHasCancelLocation:(BOOL)arg1 ;
-(BOOL)hasCancelLocation;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


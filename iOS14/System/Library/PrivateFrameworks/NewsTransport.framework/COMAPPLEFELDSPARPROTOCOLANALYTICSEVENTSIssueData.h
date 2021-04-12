/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData : PBCodable <NSCopying> {

	NSString* _issueId;
	int _issueType;
	NSMutableArray* _topicIds;
	BOOL _isBundlePaid;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasIssueId; 
@property (nonatomic,retain) NSString * issueId;                     //@synthesize issueId=_issueId - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                      //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasIssueType; 
@property (assign,nonatomic) int issueType;                          //@synthesize issueType=_issueType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;              //@synthesize topicIds=_topicIds - In the implementation block
+(Class)topicIdsType;
-(void)clearTopicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicIds;
-(id)dictionaryRepresentation;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)issueId;
-(unsigned long long)hash;
-(void)setIssueId:(NSString *)arg1 ;
-(void)setIssueType:(int)arg1 ;
-(void)setHasIssueType:(BOOL)arg1 ;
-(BOOL)hasIssueType;
-(id)issueTypeAsString:(int)arg1 ;
-(int)StringAsIssueType:(id)arg1 ;
-(BOOL)isBundlePaid;
-(BOOL)hasIssueId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)issueType;
-(unsigned long long)topicIdsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasIsBundlePaid:(BOOL)arg1 ;
-(BOOL)hasIsBundlePaid;
-(BOOL)isEqual:(id)arg1 ;
@end


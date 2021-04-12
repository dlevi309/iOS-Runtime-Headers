/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBIssueData : PBCodable <NSCopying> {

	NSString* _issueId;
	int _issueType;
	BOOL _isBundlePaid;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasIssueId; 
@property (nonatomic,retain) NSString * issueId;                //@synthesize issueId=_issueId - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                 //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasIssueType; 
@property (assign,nonatomic) int issueType;                     //@synthesize issueType=_issueType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isBundlePaid;
-(int)issueType;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(void)setHasIsBundlePaid:(BOOL)arg1 ;
-(BOOL)hasIsBundlePaid;
-(void)setIssueId:(NSString *)arg1 ;
-(BOOL)hasIssueId;
-(void)setIssueType:(int)arg1 ;
-(void)setHasIssueType:(BOOL)arg1 ;
-(BOOL)hasIssueType;
-(id)issueTypeAsString:(int)arg1 ;
-(int)StringAsIssueType:(id)arg1 ;
-(NSString *)issueId;
@end


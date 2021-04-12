/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData : PBCodable <NSCopying> {

	NSData* _issueSessionId;

}

@property (nonatomic,readonly) BOOL hasIssueSessionId; 
@property (nonatomic,retain) NSData * issueSessionId;               //@synthesize issueSessionId=_issueSessionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIssueSessionId:(NSData *)arg1 ;
-(BOOL)hasIssueSessionId;
-(NSData *)issueSessionId;
@end


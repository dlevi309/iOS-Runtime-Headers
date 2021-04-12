/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewData : PBCodable <NSCopying> {

	NSData* _issueViewingSessionId;

}

@property (nonatomic,readonly) BOOL hasIssueViewingSessionId; 
@property (nonatomic,retain) NSData * issueViewingSessionId;               //@synthesize issueViewingSessionId=_issueViewingSessionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIssueViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasIssueViewingSessionId;
-(NSData *)issueViewingSessionId;
@end


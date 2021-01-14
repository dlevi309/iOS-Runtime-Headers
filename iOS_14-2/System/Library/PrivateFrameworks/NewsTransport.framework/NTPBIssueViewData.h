/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBIssueViewData : PBCodable <NSCopying> {

	NSData* _issueViewingSessionId;

}

@property (nonatomic,readonly) BOOL hasIssueViewingSessionId; 
@property (nonatomic,retain) NSData * issueViewingSessionId;               //@synthesize issueViewingSessionId=_issueViewingSessionId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIssueViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasIssueViewingSessionId;
-(NSData *)issueViewingSessionId;
@end


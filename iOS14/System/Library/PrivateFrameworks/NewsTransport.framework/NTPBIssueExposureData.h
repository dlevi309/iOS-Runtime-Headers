/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBIssueExposureData : PBCodable <NSCopying> {

	NSData* _issueSessionId;

}

@property (nonatomic,readonly) BOOL hasIssueSessionId; 
@property (nonatomic,retain) NSData * issueSessionId;               //@synthesize issueSessionId=_issueSessionId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueSessionId:(NSData *)arg1 ;
-(BOOL)hasIssueSessionId;
-(NSData *)issueSessionId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


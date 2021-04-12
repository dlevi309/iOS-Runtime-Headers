/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying> {

	NSData* _articleRecordData;
	NSData* _masterIssueRecordData;
	NSData* _sourceChannelRecordData;

}

@property (nonatomic,readonly) BOOL hasArticleRecordData; 
@property (nonatomic,retain) NSData * articleRecordData;                     //@synthesize articleRecordData=_articleRecordData - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelRecordData; 
@property (nonatomic,retain) NSData * sourceChannelRecordData;               //@synthesize sourceChannelRecordData=_sourceChannelRecordData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterIssueRecordData; 
@property (nonatomic,retain) NSData * masterIssueRecordData;                 //@synthesize masterIssueRecordData=_masterIssueRecordData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticleRecordData:(NSData *)arg1 ;
-(void)setSourceChannelRecordData:(NSData *)arg1 ;
-(void)setMasterIssueRecordData:(NSData *)arg1 ;
-(BOOL)hasArticleRecordData;
-(BOOL)hasSourceChannelRecordData;
-(BOOL)hasMasterIssueRecordData;
-(NSData *)articleRecordData;
-(NSData *)sourceChannelRecordData;
-(NSData *)masterIssueRecordData;
@end


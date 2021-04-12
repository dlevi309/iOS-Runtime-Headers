/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setArticleRecordData:(NSData *)arg1 ;
-(void)setSourceChannelRecordData:(NSData *)arg1 ;
-(void)setMasterIssueRecordData:(NSData *)arg1 ;
-(BOOL)hasArticleRecordData;
-(BOOL)hasSourceChannelRecordData;
-(NSData *)articleRecordData;
-(unsigned long long)hash;
-(BOOL)hasMasterIssueRecordData;
-(NSData *)sourceChannelRecordData;
-(NSData *)masterIssueRecordData;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


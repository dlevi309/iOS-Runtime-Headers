/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSMutableArray;

@interface NTPBIssueListRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSMutableArray* _issueIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                  //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * issueIDs;              //@synthesize issueIDs=_issueIDs - In the implementation block
+(Class)issueIDsType;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)addIssueIDs:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)issueIDs;
-(id)description;
-(unsigned long long)issueIDsCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)issueIDsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIssueIDs:(NSMutableArray *)arg1 ;
-(void)clearIssueIDs;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


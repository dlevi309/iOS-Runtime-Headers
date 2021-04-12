/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSMutableArray;

@interface NTPBTagListRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSMutableArray* _tagIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIDs;              //@synthesize tagIDs=_tagIDs - In the implementation block
+(Class)tagIDsType;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setTagIDs:(NSMutableArray *)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)tagIDs;
-(id)description;
-(void)addTagIDs:(id)arg1 ;
-(void)clearTagIDs;
-(unsigned long long)tagIDsCount;
-(id)tagIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


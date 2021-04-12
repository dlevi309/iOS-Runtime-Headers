/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase, NSString;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIDs;
	NTPBRecordBase* _base;
	NSString* _metadata;
	int _type;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                    //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs;              //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(Class)articleIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(NSString *)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMetadata;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setArticleIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIDs;
-(BOOL)hasBase;
-(void)addArticleIDs:(id)arg1 ;
-(void)clearArticleIDs;
-(unsigned long long)articleIDsCount;
-(id)articleIDsAtIndex:(unsigned long long)arg1 ;
@end


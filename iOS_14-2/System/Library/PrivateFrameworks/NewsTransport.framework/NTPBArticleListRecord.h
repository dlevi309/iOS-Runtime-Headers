/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                    //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs;              //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(Class)articleIDsType;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setArticleIDs:(NSMutableArray *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(NSMutableArray *)articleIDs;
-(id)articleIDsAtIndex:(unsigned long long)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)clearArticleIDs;
-(BOOL)hasType;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(unsigned long long)articleIDsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addArticleIDs:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


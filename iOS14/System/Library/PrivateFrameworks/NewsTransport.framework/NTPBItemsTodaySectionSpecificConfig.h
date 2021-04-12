/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _maxArticlesShown;
	NSMutableArray* _items;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,retain) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL hasMaxArticlesShown; 
@property (assign,nonatomic) unsigned long long maxArticlesShown;              //@synthesize maxArticlesShown=_maxArticlesShown - In the implementation block
+(Class)itemsType;
-(id)dictionaryRepresentation;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)clearItems;
-(void)addItems:(id)arg1 ;
-(void)setHasMaxArticlesShown:(BOOL)arg1 ;
-(BOOL)hasMaxArticlesShown;
-(unsigned long long)maxArticlesShown;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxArticlesShown:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


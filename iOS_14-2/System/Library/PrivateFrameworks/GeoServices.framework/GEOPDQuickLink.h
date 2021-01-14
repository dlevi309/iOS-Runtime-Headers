/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDQuickLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _quickLinkItems;
	NSMutableArray* _secondaryQuickLinkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_quickLinkItems : 1;
		unsigned read_secondaryQuickLinkItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * quickLinkItems; 
@property (nonatomic,retain) NSMutableArray * secondaryQuickLinkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)quickLinkItemType;
+(Class)secondaryQuickLinkItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addQuickLinkItem:(id)arg1 ;
-(void)addSecondaryQuickLinkItem:(id)arg1 ;
-(unsigned long long)quickLinkItemsCount;
-(void)clearQuickLinkItems;
-(id)quickLinkItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)secondaryQuickLinkItemsCount;
-(void)clearSecondaryQuickLinkItems;
-(id)secondaryQuickLinkItemAtIndex:(unsigned long long)arg1 ;
-(void)setQuickLinkItems:(NSMutableArray *)arg1 ;
-(void)setSecondaryQuickLinkItems:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)quickLinkItems;
-(NSMutableArray *)secondaryQuickLinkItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDQuickLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _quickLinkItems;

}

@property (nonatomic,retain) NSMutableArray * quickLinkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)quickLinkItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)quickLinkItems;
-(void)addQuickLinkItem:(id)arg1 ;
-(unsigned long long)quickLinkItemsCount;
-(void)clearQuickLinkItems;
-(id)quickLinkItemAtIndex:(unsigned long long)arg1 ;
-(void)setQuickLinkItems:(NSMutableArray *)arg1 ;
@end


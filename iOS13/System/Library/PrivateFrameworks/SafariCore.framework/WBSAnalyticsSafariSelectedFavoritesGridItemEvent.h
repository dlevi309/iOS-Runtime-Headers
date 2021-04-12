/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying> {

	unsigned long long _itemsPerRow;
	unsigned long long _row;
	unsigned long long _sectionIndex;
	unsigned long long _timestamp;
	int _displayContext;
	int _section;
	int _type;
	SCD_Struct_WB10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRow; 
@property (assign,nonatomic) unsigned long long row;                       //@synthesize row=_row - In the implementation block
@property (assign,nonatomic) BOOL hasItemsPerRow; 
@property (assign,nonatomic) unsigned long long itemsPerRow;               //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayContext; 
@property (assign,nonatomic) int displayContext;                           //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) BOOL hasSection; 
@property (assign,nonatomic) int section;                                  //@synthesize section=_section - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(int)section;
-(unsigned long long)row;
-(void)setSection:(int)arg1 ;
-(int)displayContext;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDisplayContext:(int)arg1 ;
-(void)setItemsPerRow:(unsigned long long)arg1 ;
-(unsigned long long)itemsPerRow;
-(void)setRow:(unsigned long long)arg1 ;
-(void)setHasRow:(BOOL)arg1 ;
-(BOOL)hasRow;
-(void)setHasItemsPerRow:(BOOL)arg1 ;
-(BOOL)hasItemsPerRow;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(BOOL)hasSectionIndex;
-(void)setHasDisplayContext:(BOOL)arg1 ;
-(BOOL)hasDisplayContext;
-(id)displayContextAsString:(int)arg1 ;
-(int)StringAsDisplayContext:(id)arg1 ;
-(void)setHasSection:(BOOL)arg1 ;
-(BOOL)hasSection;
-(id)sectionAsString:(int)arg1 ;
-(int)StringAsSection:(id)arg1 ;
@end


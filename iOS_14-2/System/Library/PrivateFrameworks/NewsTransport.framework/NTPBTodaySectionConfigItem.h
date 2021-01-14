/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBTodaySectionConfigArticle, NTPBTodaySectionConfigWebEmbed;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {

	NTPBTodaySectionConfigArticle* _article;
	int _itemType;
	NTPBTodaySectionConfigWebEmbed* _webEmbed;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) int itemType;                                           //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticle; 
@property (nonatomic,retain) NTPBTodaySectionConfigArticle * article;                //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbed; 
@property (nonatomic,retain) NTPBTodaySectionConfigWebEmbed * webEmbed;              //@synthesize webEmbed=_webEmbed - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBTodaySectionConfigArticle *)article;
-(NTPBTodaySectionConfigWebEmbed *)webEmbed;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasItemType;
-(void)setHasItemType:(BOOL)arg1 ;
-(void)setItemType:(int)arg1 ;
-(BOOL)hasArticle;
-(BOOL)hasWebEmbed;
-(id)description;
-(int)itemType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticle:(NTPBTodaySectionConfigArticle *)arg1 ;
-(void)setWebEmbed:(NTPBTodaySectionConfigWebEmbed *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


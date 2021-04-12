/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {

	unsigned long long _preferredSlotAllocation;
	NSMutableArray* _embedFonts;
	NSString* _urlString;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                                    //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableArray * embedFonts;                             //@synthesize embedFonts=_embedFonts - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredSlotAllocation; 
@property (assign,nonatomic) unsigned long long preferredSlotAllocation;              //@synthesize preferredSlotAllocation=_preferredSlotAllocation - In the implementation block
+(Class)embedFontsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)addEmbedFonts:(id)arg1 ;
-(void)setPreferredSlotAllocation:(unsigned long long)arg1 ;
-(void)setEmbedFonts:(NSMutableArray *)arg1 ;
-(BOOL)hasUrlString;
-(void)clearEmbedFonts;
-(unsigned long long)embedFontsCount;
-(id)embedFontsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferredSlotAllocation:(BOOL)arg1 ;
-(BOOL)hasPreferredSlotAllocation;
-(NSMutableArray *)embedFonts;
-(unsigned long long)preferredSlotAllocation;
@end


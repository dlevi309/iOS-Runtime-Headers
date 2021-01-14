/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {

	unsigned long long _preferredSlotAllocation;
	NSString* _urlString;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                                    //@synthesize urlString=_urlString - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredSlotAllocation; 
@property (assign,nonatomic) unsigned long long preferredSlotAllocation;              //@synthesize preferredSlotAllocation=_preferredSlotAllocation - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)urlString;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasUrlString;
-(void)setHasPreferredSlotAllocation:(BOOL)arg1 ;
-(BOOL)hasPreferredSlotAllocation;
-(unsigned long long)preferredSlotAllocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPreferredSlotAllocation:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBFeedViewportGap, NTPBFeedViewportGroup;

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {

	NSString* _identifier;
	NTPBFeedViewportGap* _pbGap;
	NTPBFeedViewportGroup* _pbGroup;
	int _type;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGroup; 
@property (nonatomic,retain) NTPBFeedViewportGroup * pbGroup;              //@synthesize pbGroup=_pbGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGap; 
@property (nonatomic,retain) NTPBFeedViewportGap * pbGap;                  //@synthesize pbGap=_pbGap - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPbGap:(NTPBFeedViewportGap *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(NTPBFeedViewportGroup *)pbGroup;
-(void)setType:(int)arg1 ;
-(id)description;
-(NTPBFeedViewportGap *)pbGap;
-(BOOL)hasPbGap;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)hasPbGroup;
-(void)writeTo:(id)arg1 ;
-(void)setPbGroup:(NTPBFeedViewportGroup *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


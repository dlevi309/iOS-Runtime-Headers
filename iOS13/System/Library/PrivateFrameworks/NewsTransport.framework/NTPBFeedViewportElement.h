/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGroup; 
@property (nonatomic,retain) NTPBFeedViewportGroup * pbGroup;              //@synthesize pbGroup=_pbGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGap; 
@property (nonatomic,retain) NTPBFeedViewportGap * pbGap;                  //@synthesize pbGap=_pbGap - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(NTPBFeedViewportGroup *)pbGroup;
-(void)setPbGroup:(NTPBFeedViewportGroup *)arg1 ;
-(void)setPbGap:(NTPBFeedViewportGap *)arg1 ;
-(NTPBFeedViewportGap *)pbGap;
-(BOOL)hasPbGroup;
-(BOOL)hasPbGap;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	BOOL _deleted;
	BOOL _edited;
	BOOL _shared;
	BOOL _tapped;
	BOOL _visible;
	struct {
		unsigned has_proactiveItemType : 1;
		unsigned has_timeSinceStart : 1;
		unsigned has_deleted : 1;
		unsigned has_edited : 1;
		unsigned has_shared : 1;
		unsigned has_tapped : 1;
		unsigned has_visible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType; 
@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart; 
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL hasTapped; 
@property (assign,nonatomic) BOOL tapped; 
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared; 
@property (assign,nonatomic) BOOL hasEdited; 
@property (assign,nonatomic) BOOL edited; 
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)deleted;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)shared;
-(void)readAll:(BOOL)arg1 ;
-(void)setShared:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(int)timeSinceStart;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setHasProactiveItemType:(BOOL)arg1 ;
-(BOOL)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(BOOL)tapped;
-(void)setTapped:(BOOL)arg1 ;
-(void)setHasTapped:(BOOL)arg1 ;
-(BOOL)hasTapped;
-(BOOL)edited;
-(void)setEdited:(BOOL)arg1 ;
-(void)setHasEdited:(BOOL)arg1 ;
-(BOOL)hasEdited;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(BOOL)hasDeleted;
@end


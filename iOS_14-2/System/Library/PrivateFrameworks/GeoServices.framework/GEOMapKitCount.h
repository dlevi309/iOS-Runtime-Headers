/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMapKitCount : PBCodable <NSCopying> {

	unsigned _appCount;
	int _appType;
	int _countType;
	unsigned _useCount;
	struct {
		unsigned has_appCount : 1;
		unsigned has_appType : 1;
		unsigned has_countType : 1;
		unsigned has_useCount : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCountType; 
@property (assign,nonatomic) int countType; 
@property (assign,nonatomic) BOOL hasAppType; 
@property (assign,nonatomic) int appType; 
@property (assign,nonatomic) BOOL hasUseCount; 
@property (assign,nonatomic) unsigned useCount; 
@property (assign,nonatomic) BOOL hasAppCount; 
@property (assign,nonatomic) unsigned appCount; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasAppCount:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasCountType:(BOOL)arg1 ;
-(BOOL)hasAppCount;
-(void)setAppCount:(unsigned)arg1 ;
-(unsigned)appCount;
-(void)readAll:(BOOL)arg1 ;
-(void)setUseCount:(unsigned)arg1 ;
-(id)appTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(int)countType;
-(void)setAppType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsAppType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCountType:(int)arg1 ;
-(id)description;
-(void)setHasAppType:(BOOL)arg1 ;
-(unsigned)useCount;
-(BOOL)hasCountType;
-(unsigned long long)hash;
-(id)countTypeAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)appType;
-(BOOL)hasUseCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUseCount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAppType;
-(int)StringAsCountType:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)appType;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)useCount;
-(void)setUseCount:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)countType;
-(void)setCountType:(int)arg1 ;
-(void)setHasCountType:(BOOL)arg1 ;
-(BOOL)hasCountType;
-(id)countTypeAsString:(int)arg1 ;
-(int)StringAsCountType:(id)arg1 ;
-(void)setAppType:(int)arg1 ;
-(void)setHasAppType:(BOOL)arg1 ;
-(BOOL)hasAppType;
-(id)appTypeAsString:(int)arg1 ;
-(int)StringAsAppType:(id)arg1 ;
-(void)setHasUseCount:(BOOL)arg1 ;
-(BOOL)hasUseCount;
-(unsigned)appCount;
-(void)setAppCount:(unsigned)arg1 ;
-(void)setHasAppCount:(BOOL)arg1 ;
-(BOOL)hasAppCount;
@end


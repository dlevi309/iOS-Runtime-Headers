/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOCacheMissLoadError : PBCodable <NSCopying> {

	NSString* _errorDomain;
	unsigned _count;
	int _errorCode;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(int)errorCode;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable <NSCopying> {

	NSMutableArray* _errors;
	unsigned _bytes;
	unsigned _count;
	unsigned _httpStatus;
	int _missType;
	int _requestorType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_httpStatus : 1;
		unsigned has_missType : 1;
		unsigned has_requestorType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) BOOL hasMissType; 
@property (assign,nonatomic) int missType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
@property (nonatomic,retain) NSMutableArray * errors; 
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) unsigned httpStatus; 
+(BOOL)isValid:(id)arg1 ;
+(Class)errorsType;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)bytes;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(BOOL)hasBytes;
-(int)missType;
-(void)setMissType:(int)arg1 ;
-(void)setRequestorType:(int)arg1 ;
-(void)setHttpStatus:(unsigned)arg1 ;
-(NSMutableArray *)errors;
-(void)setBytes:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)clearErrors;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)addErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)errorsCount;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)httpStatus;
-(int)requestorType;
-(BOOL)hasMissType;
-(BOOL)hasRequestorType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
-(void)setHasMissType:(BOOL)arg1 ;
-(id)missTypeAsString:(int)arg1 ;
-(int)StringAsMissType:(id)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
@end


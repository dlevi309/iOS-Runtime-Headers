/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)errors;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)addErrors:(id)arg1 ;
-(unsigned long long)errorsCount;
-(void)clearErrors;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
-(int)requestorType;
-(void)setRequestorType:(int)arg1 ;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(int)missType;
-(void)setMissType:(int)arg1 ;
-(void)setHasMissType:(BOOL)arg1 ;
-(BOOL)hasMissType;
-(id)missTypeAsString:(int)arg1 ;
-(int)StringAsMissType:(id)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(BOOL)hasBytes;
-(unsigned)httpStatus;
-(void)setHttpStatus:(unsigned)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
@end


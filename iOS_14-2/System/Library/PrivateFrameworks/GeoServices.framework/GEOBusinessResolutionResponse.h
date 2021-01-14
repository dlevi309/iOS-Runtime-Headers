/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOBusinessResolutionResponse : PBCodable <NSCopying> {

	NSString* _businessName;
	unsigned long long _businessUID;
	int _status;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasBusinessName; 
@property (nonatomic,retain) NSString * businessName; 
@property (assign,nonatomic) BOOL hasBusinessUID; 
@property (assign,nonatomic) unsigned long long businessUID; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)businessName;
-(unsigned long long)businessUID;
-(void)setBusinessName:(NSString *)arg1 ;
-(void)setBusinessUID:(unsigned long long)arg1 ;
-(BOOL)hasBusinessName;
-(void)setHasBusinessUID:(BOOL)arg1 ;
-(BOOL)hasBusinessUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end


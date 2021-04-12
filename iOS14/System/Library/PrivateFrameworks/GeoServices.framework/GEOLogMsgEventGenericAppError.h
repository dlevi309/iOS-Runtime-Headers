/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {

	long long _appErrorCode;
	NSString* _appErrorDomain;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasAppErrorDomain; 
@property (nonatomic,retain) NSString * appErrorDomain; 
@property (assign,nonatomic) BOOL hasAppErrorCode; 
@property (assign,nonatomic) long long appErrorCode; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)appErrorDomain;
-(void)setAppErrorDomain:(NSString *)arg1 ;
-(void)setAppErrorCode:(long long)arg1 ;
-(BOOL)hasAppErrorDomain;
-(long long)appErrorCode;
-(void)setHasAppErrorCode:(BOOL)arg1 ;
-(BOOL)hasAppErrorCode;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


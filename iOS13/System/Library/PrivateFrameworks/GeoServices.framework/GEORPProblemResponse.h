/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {

	NSString* _problemId;
	int _statusCode;
	BOOL _isNotificationSupported;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) BOOL hasIsNotificationSupported; 
@property (assign,nonatomic) BOOL isNotificationSupported; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(BOOL)isNotificationSupported;
-(void)setIsNotificationSupported:(BOOL)arg1 ;
-(void)setHasIsNotificationSupported:(BOOL)arg1 ;
-(BOOL)hasIsNotificationSupported;
@end


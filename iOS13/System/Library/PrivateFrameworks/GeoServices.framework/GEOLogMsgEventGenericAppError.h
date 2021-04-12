/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {

	long long _appErrorCode;
	NSString* _appErrorDomain;
	struct {
		unsigned has_appErrorCode : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppErrorDomain; 
@property (nonatomic,retain) NSString * appErrorDomain; 
@property (assign,nonatomic) BOOL hasAppErrorCode; 
@property (assign,nonatomic) long long appErrorCode; 
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
-(void)readAll:(BOOL)arg1 ;
-(NSString *)appErrorDomain;
-(void)setAppErrorDomain:(NSString *)arg1 ;
-(BOOL)hasAppErrorDomain;
-(long long)appErrorCode;
-(void)setAppErrorCode:(long long)arg1 ;
-(void)setHasAppErrorCode:(BOOL)arg1 ;
-(BOOL)hasAppErrorCode;
@end


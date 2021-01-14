/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSResponseCodeMessage : PBCodable <NSCopying> {

	int _responseCode;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResponseCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)responseCode;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
@end


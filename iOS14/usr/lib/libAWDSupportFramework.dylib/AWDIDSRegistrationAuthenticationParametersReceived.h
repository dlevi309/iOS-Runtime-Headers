/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSRegistrationAuthenticationParametersReceived : PBCodable <NSCopying> {

	unsigned long long _timeIntervalSinceRequest;
	unsigned long long _timestamp;
	int _error;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceRequest; 
@property (assign,nonatomic) unsigned long long timeIntervalSinceRequest;              //@synthesize timeIntervalSinceRequest=_timeIntervalSinceRequest - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(int)arg1 ;
-(int)error;
-(id)description;
-(void)setTimeIntervalSinceRequest:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTimeIntervalSinceRequest:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceRequest;
-(unsigned long long)timeIntervalSinceRequest;
@end


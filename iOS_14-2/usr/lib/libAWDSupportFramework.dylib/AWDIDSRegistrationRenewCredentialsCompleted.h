/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationRenewCredentialsCompleted : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	NSString* _errorDomain;
	int _renewResult;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRenewResult; 
@property (assign,nonatomic) int renewResult;                           //@synthesize renewResult=_renewResult - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setRenewResult:(int)arg1 ;
-(int)renewResult;
-(void)setHasRenewResult:(BOOL)arg1 ;
-(BOOL)hasRenewResult;
@end


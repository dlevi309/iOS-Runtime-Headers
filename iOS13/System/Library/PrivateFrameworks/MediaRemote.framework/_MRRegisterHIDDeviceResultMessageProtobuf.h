/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {

	unsigned _deviceIdentifier;
	unsigned _errorCode;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceIdentifier; 
@property (assign,nonatomic) unsigned deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)deviceIdentifier;
-(void)setDeviceIdentifier:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasDeviceIdentifier;
-(void)setHasDeviceIdentifier:(BOOL)arg1 ;
@end


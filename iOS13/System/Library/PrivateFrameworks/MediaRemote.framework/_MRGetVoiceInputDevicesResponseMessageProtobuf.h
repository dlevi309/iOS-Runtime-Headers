/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR27* _deviceIDs;
	unsigned _errorCode;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) unsigned long long deviceIDsCount; 
@property (nonatomic,readonly) unsigned* deviceIDs; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                               //@synthesize errorCode=_errorCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned*)deviceIDs;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)addDeviceIDs:(unsigned)arg1 ;
-(unsigned long long)deviceIDsCount;
-(unsigned)deviceIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearDeviceIDs;
-(void)setDeviceIDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end


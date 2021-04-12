/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _controllerID;
	_MRGameControllerButtonsProtobuf* _buttons;
	_MRGameControllerDigitizerProtobuf* _digitizer;
	_MRGameControllerMotionProtobuf* _motion;
	SCD_Struct_MR4 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


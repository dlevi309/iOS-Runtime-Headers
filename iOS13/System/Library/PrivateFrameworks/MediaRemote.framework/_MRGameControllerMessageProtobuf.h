/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign,nonatomic) BOOL hasControllerID; 
@property (assign,nonatomic) unsigned long long controllerID;                             //@synthesize controllerID=_controllerID - In the implementation block
@property (nonatomic,readonly) BOOL hasMotion; 
@property (nonatomic,retain) _MRGameControllerMotionProtobuf * motion;                    //@synthesize motion=_motion - In the implementation block
@property (nonatomic,readonly) BOOL hasButtons; 
@property (nonatomic,retain) _MRGameControllerButtonsProtobuf * buttons;                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,readonly) BOOL hasDigitizer; 
@property (nonatomic,retain) _MRGameControllerDigitizerProtobuf * digitizer;              //@synthesize digitizer=_digitizer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setButtons:(_MRGameControllerButtonsProtobuf *)arg1 ;
-(_MRGameControllerButtonsProtobuf *)buttons;
-(void)setControllerID:(unsigned long long)arg1 ;
-(void)setHasControllerID:(BOOL)arg1 ;
-(BOOL)hasControllerID;
-(unsigned long long)controllerID;
-(BOOL)hasButtons;
-(BOOL)hasMotion;
-(void)setMotion:(_MRGameControllerMotionProtobuf *)arg1 ;
-(void)setDigitizer:(_MRGameControllerDigitizerProtobuf *)arg1 ;
-(BOOL)hasDigitizer;
-(_MRGameControllerDigitizerProtobuf *)digitizer;
-(_MRGameControllerMotionProtobuf *)motion;
@end


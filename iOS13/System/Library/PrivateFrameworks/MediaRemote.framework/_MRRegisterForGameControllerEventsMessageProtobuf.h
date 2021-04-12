/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {

	int _inputModeFlags;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasInputModeFlags; 
@property (assign,nonatomic) int inputModeFlags;                  //@synthesize inputModeFlags=_inputModeFlags - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInputModeFlags:(int)arg1 ;
-(int)inputModeFlags;
-(void)setHasInputModeFlags:(BOOL)arg1 ;
-(BOOL)hasInputModeFlags;
-(id)inputModeFlagsAsString:(int)arg1 ;
-(int)StringAsInputModeFlags:(id)arg1 ;
@end


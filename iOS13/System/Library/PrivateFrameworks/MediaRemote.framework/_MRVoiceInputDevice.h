/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {

	_MRVoiceInputDeviceDescriptorProtobuf* _descriptor;
	unsigned _deviceID;
	int _recordingState;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasDeviceID; 
@property (assign,nonatomic) unsigned deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) _MRVoiceInputDeviceDescriptorProtobuf * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL hasRecordingState; 
@property (assign,nonatomic) int recordingState;                                              //@synthesize recordingState=_recordingState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)deviceID;
-(void)setDeviceID:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceID;
-(_MRVoiceInputDeviceDescriptorProtobuf *)descriptor;
-(void)setDescriptor:(_MRVoiceInputDeviceDescriptorProtobuf *)arg1 ;
-(BOOL)hasDescriptor;
-(int)recordingState;
-(void)setRecordingState:(int)arg1 ;
-(void)setHasDeviceID:(BOOL)arg1 ;
-(void)setHasRecordingState:(BOOL)arg1 ;
-(BOOL)hasRecordingState;
-(id)recordingStateAsString:(int)arg1 ;
-(int)StringAsRecordingState:(id)arg1 ;
@end


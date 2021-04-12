/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {

	_MRVoiceInputDeviceDescriptorProtobuf* _descriptor;

}

@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) _MRVoiceInputDeviceDescriptorProtobuf * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(_MRVoiceInputDeviceDescriptorProtobuf *)descriptor;
-(void)setDescriptor:(_MRVoiceInputDeviceDescriptorProtobuf *)arg1 ;
-(BOOL)hasDescriptor;
@end


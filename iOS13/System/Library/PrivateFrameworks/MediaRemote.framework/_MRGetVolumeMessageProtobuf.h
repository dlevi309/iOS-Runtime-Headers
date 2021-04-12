/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRGetVolumeMessageProtobuf : PBCodable <NSCopying> {

	NSString* _outputDeviceUID;

}

@property (nonatomic,readonly) BOOL hasOutputDeviceUID; 
@property (nonatomic,retain) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(BOOL)hasOutputDeviceUID;
-(NSString *)outputDeviceUID;
@end


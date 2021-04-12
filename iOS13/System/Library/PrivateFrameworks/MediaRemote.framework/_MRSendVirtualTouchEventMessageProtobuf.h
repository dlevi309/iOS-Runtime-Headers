/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _virtualDeviceID;
	_MRVirtualTouchEventProtobuf* _event;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasVirtualDeviceID; 
@property (assign,nonatomic) unsigned long long virtualDeviceID;                //@synthesize virtualDeviceID=_virtualDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) _MRVirtualTouchEventProtobuf * event;              //@synthesize event=_event - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_MRVirtualTouchEventProtobuf *)event;
-(void)setEvent:(_MRVirtualTouchEventProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEvent;
-(void)setVirtualDeviceID:(unsigned long long)arg1 ;
-(void)setHasVirtualDeviceID:(BOOL)arg1 ;
-(BOOL)hasVirtualDeviceID;
-(unsigned long long)virtualDeviceID;
@end


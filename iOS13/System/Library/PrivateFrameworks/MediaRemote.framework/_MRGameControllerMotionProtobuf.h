/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {

	_MRGameControllerAccelerationProtobuf* _attitude;
	_MRGameControllerAccelerationProtobuf* _gravity;
	_MRGameControllerAccelerationProtobuf* _rotation;
	_MRGameControllerAccelerationProtobuf* _userAcceleration;

}

@property (nonatomic,readonly) BOOL hasGravity; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAcceleration; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) BOOL hasAttitude; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * attitude;                      //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) BOOL hasRotation; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * rotation;                      //@synthesize rotation=_rotation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)gravity;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)rotation;
-(void)setRotation:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGravity:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)attitude;
-(_MRGameControllerAccelerationProtobuf *)userAcceleration;
-(void)setUserAcceleration:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(void)setAttitude:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(BOOL)hasGravity;
-(BOOL)hasUserAcceleration;
-(BOOL)hasAttitude;
-(BOOL)hasRotation;
@end


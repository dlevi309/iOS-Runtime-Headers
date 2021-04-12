/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying> {

	_MRAVOutputDeviceDescriptorProtobuf* _route;
	int _status;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) _MRAVOutputDeviceDescriptorProtobuf * route;              //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setRoute:(_MRAVOutputDeviceDescriptorProtobuf *)arg1 ;
-(_MRAVOutputDeviceDescriptorProtobuf *)route;
-(BOOL)hasRoute;
@end


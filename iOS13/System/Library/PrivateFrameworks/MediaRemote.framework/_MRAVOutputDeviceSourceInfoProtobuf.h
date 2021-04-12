/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {

	NSString* _routingContextUID;
	BOOL _multipleBuiltInDevices;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasRoutingContextUID; 
@property (nonatomic,retain) NSString * routingContextUID;                //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (assign,nonatomic) BOOL hasMultipleBuiltInDevices; 
@property (assign,nonatomic) BOOL multipleBuiltInDevices;                 //@synthesize multipleBuiltInDevices=_multipleBuiltInDevices - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)routingContextUID;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(BOOL)multipleBuiltInDevices;
-(void)setMultipleBuiltInDevices:(BOOL)arg1 ;
-(BOOL)hasRoutingContextUID;
-(void)setHasMultipleBuiltInDevices:(BOOL)arg1 ;
-(BOOL)hasMultipleBuiltInDevices;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerPropertiesProtobuf;

@interface _MRRegisterGameControllerMessageProtobuf : PBCodable <NSCopying> {

	_MRGameControllerPropertiesProtobuf* _properties;

}

@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) _MRGameControllerPropertiesProtobuf * properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_MRGameControllerPropertiesProtobuf *)properties;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProperties:(_MRGameControllerPropertiesProtobuf *)arg1 ;
-(BOOL)hasProperties;
@end


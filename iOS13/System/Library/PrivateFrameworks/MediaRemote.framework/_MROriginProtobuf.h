/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRDeviceInfoMessageProtobuf, NSString;

@interface _MROriginProtobuf : PBCodable <NSCopying> {

	_MRDeviceInfoMessageProtobuf* _deviceInfoDeprecated;
	NSString* _displayName;
	int _identifier;
	int _type;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL isLocal; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) int identifier;                                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoDeprecated; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfoDeprecated;              //@synthesize deviceInfoDeprecated=_deviceInfoDeprecated - In the implementation block
+(id)localOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)isLocal;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(BOOL)hasDisplayName;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setDeviceInfoDeprecated:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(BOOL)hasDeviceInfoDeprecated;
-(_MRDeviceInfoMessageProtobuf *)deviceInfoDeprecated;
@end


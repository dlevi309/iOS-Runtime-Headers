/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {

	long long _maximumPacketSize;
	long long _packetCapacity;
	long long _packetCount;
	NSData* _contents;
	_MRAudioFormatSettingsProtobuf* _formatSettings;
	NSMutableArray* _packetDescriptions;
	SCD_Struct_MR6 _has;

}

@property (nonatomic,readonly) BOOL hasFormatSettings; 
@property (nonatomic,retain) _MRAudioFormatSettingsProtobuf * formatSettings;              //@synthesize formatSettings=_formatSettings - In the implementation block
@property (assign,nonatomic) BOOL hasPacketCapacity; 
@property (assign,nonatomic) long long packetCapacity;                                     //@synthesize packetCapacity=_packetCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumPacketSize; 
@property (assign,nonatomic) long long maximumPacketSize;                                  //@synthesize maximumPacketSize=_maximumPacketSize - In the implementation block
@property (assign,nonatomic) BOOL hasPacketCount; 
@property (assign,nonatomic) long long packetCount;                                        //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                                            //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSMutableArray * packetDescriptions;                          //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
+(Class)packetDescriptionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)contents;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContents:(NSData *)arg1 ;
-(BOOL)hasContents;
-(void)setPacketCount:(long long)arg1 ;
-(NSMutableArray *)packetDescriptions;
-(long long)packetCapacity;
-(long long)packetCount;
-(long long)maximumPacketSize;
-(_MRAudioFormatSettingsProtobuf *)formatSettings;
-(void)addPacketDescriptions:(id)arg1 ;
-(void)setFormatSettings:(_MRAudioFormatSettingsProtobuf *)arg1 ;
-(unsigned long long)packetDescriptionsCount;
-(void)clearPacketDescriptions;
-(id)packetDescriptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFormatSettings;
-(void)setPacketCapacity:(long long)arg1 ;
-(void)setHasPacketCapacity:(BOOL)arg1 ;
-(BOOL)hasPacketCapacity;
-(void)setMaximumPacketSize:(long long)arg1 ;
-(void)setHasMaximumPacketSize:(BOOL)arg1 ;
-(BOOL)hasMaximumPacketSize;
-(void)setHasPacketCount:(BOOL)arg1 ;
-(BOOL)hasPacketCount;
-(void)setPacketDescriptions:(NSMutableArray *)arg1 ;
@end


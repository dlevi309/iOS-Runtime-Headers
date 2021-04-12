/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRReceivedCommandAppOptionsProtobuf, NSString, _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying> {

	long long _destinationAppProcessID;
	_MRReceivedCommandAppOptionsProtobuf* _appOptions;
	int _command;
	NSString* _destinationAppDisplayID;
	_MRCommandOptionsProtobuf* _options;
	int _originUID;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _remoteControlInterfaceID;
	NSString* _senderAppDisplayID;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                                    //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) _MRCommandOptionsProtobuf * options;                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL hasOriginUID; 
@property (assign,nonatomic) int originUID;                                                  //@synthesize originUID=_originUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderAppDisplayID; 
@property (nonatomic,retain) NSString * senderAppDisplayID;                                  //@synthesize senderAppDisplayID=_senderAppDisplayID - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                             //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationAppProcessID; 
@property (assign,nonatomic) long long destinationAppProcessID;                              //@synthesize destinationAppProcessID=_destinationAppProcessID - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteControlInterfaceID; 
@property (nonatomic,retain) NSString * remoteControlInterfaceID;                            //@synthesize remoteControlInterfaceID=_remoteControlInterfaceID - In the implementation block
@property (nonatomic,readonly) BOOL hasAppOptions; 
@property (nonatomic,retain) _MRReceivedCommandAppOptionsProtobuf * appOptions;              //@synthesize appOptions=_appOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                   //@synthesize playerPath=_playerPath - In the implementation block
-(id)dictionaryRepresentation;
-(int)originUID;
-(BOOL)hasCommand;
-(_MRCommandOptionsProtobuf *)options;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(void)setSenderAppDisplayID:(NSString *)arg1 ;
-(void)setAppOptions:(_MRReceivedCommandAppOptionsProtobuf *)arg1 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(void)setRemoteControlInterfaceID:(NSString *)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(void)setOriginUID:(int)arg1 ;
-(void)setHasOriginUID:(BOOL)arg1 ;
-(BOOL)hasOriginUID;
-(BOOL)hasSenderAppDisplayID;
-(BOOL)hasDestinationAppDisplayID;
-(void)setDestinationAppProcessID:(long long)arg1 ;
-(void)setHasDestinationAppProcessID:(BOOL)arg1 ;
-(BOOL)hasDestinationAppProcessID;
-(BOOL)hasRemoteControlInterfaceID;
-(BOOL)hasAppOptions;
-(BOOL)hasPlayerPath;
-(NSString *)senderAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(long long)destinationAppProcessID;
-(NSString *)remoteControlInterfaceID;
-(_MRReceivedCommandAppOptionsProtobuf *)appOptions;
-(void)setOptions:(_MRCommandOptionsProtobuf *)arg1 ;
-(id)description;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOptions;
@end


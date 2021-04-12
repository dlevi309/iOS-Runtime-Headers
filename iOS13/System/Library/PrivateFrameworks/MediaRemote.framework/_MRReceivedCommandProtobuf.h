/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRCommandOptionsProtobuf *)options;
-(id)dictionaryRepresentation;
-(void)setOptions:(_MRCommandOptionsProtobuf *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCommand:(int)arg1 ;
-(int)command;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)hasOptions;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(void)setSenderAppDisplayID:(NSString *)arg1 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(void)setRemoteControlInterfaceID:(NSString *)arg1 ;
-(void)setAppOptions:(_MRReceivedCommandAppOptionsProtobuf *)arg1 ;
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
-(int)originUID;
-(NSString *)senderAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(long long)destinationAppProcessID;
-(NSString *)remoteControlInterfaceID;
-(_MRReceivedCommandAppOptionsProtobuf *)appOptions;
@end


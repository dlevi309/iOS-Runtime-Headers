/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoDelegateInfo, _MPCProtoRadioContentReference, NSString;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {

	_MPCProtoDelegateInfo* _accountInfo;
	_MPCProtoRadioContentReference* _nowPlayingContentReference;
	NSString* _playActivityFeatureName;
	NSString* _radioStationID;
	NSString* _radioStationURLString;
	_MPCProtoRadioContentReference* _seedContentReference;

}

@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;                                                //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationURLString; 
@property (nonatomic,retain) NSString * radioStationURLString;                                         //@synthesize radioStationURLString=_radioStationURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasSeedContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReference * seedContentReference;                    //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReference * nowPlayingContentReference;              //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountInfo; 
@property (nonatomic,retain) _MPCProtoDelegateInfo * accountInfo;                                      //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                                       //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAccountInfo:(_MPCProtoDelegateInfo *)arg1 ;
-(_MPCProtoDelegateInfo *)accountInfo;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSString *)radioStationID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(BOOL)hasRadioStationID;
-(_MPCProtoRadioContentReference *)seedContentReference;
-(_MPCProtoRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(_MPCProtoRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(_MPCProtoRadioContentReference *)arg1 ;
-(void)setRadioStationURLString:(NSString *)arg1 ;
-(BOOL)hasPlayActivityFeatureName;
-(BOOL)hasRadioStationURLString;
-(BOOL)hasSeedContentReference;
-(BOOL)hasNowPlayingContentReference;
-(BOOL)hasAccountInfo;
-(NSString *)radioStationURLString;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RMSNowPlayingInfoMessage;

@interface RMSNowPlayingInfoDidUpdateMessage : PBCodable <NSCopying> {

	RMSNowPlayingInfoMessage* _nowPlayingInfo;
	int _sessionIdentifier;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) RMSNowPlayingInfoMessage * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
-(void)setNowPlayingInfo:(RMSNowPlayingInfoMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(RMSNowPlayingInfoMessage *)nowPlayingInfo;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)hasNowPlayingInfo;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
@end


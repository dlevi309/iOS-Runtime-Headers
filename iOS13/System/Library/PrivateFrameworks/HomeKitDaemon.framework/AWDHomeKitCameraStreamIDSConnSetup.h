/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying> {

	AWDHomeKitCameraStreamIDSConnSetupParameters* _audioConnection;
	AWDHomeKitCameraStreamIDSConnSetupParameters* _keepaliveConnection;
	AWDHomeKitCameraStreamIDSConnSetupParameters* _videoConnection;

}

@property (nonatomic,readonly) BOOL hasVideoConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * videoConnection;                  //@synthesize videoConnection=_videoConnection - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * audioConnection;                  //@synthesize audioConnection=_audioConnection - In the implementation block
@property (nonatomic,readonly) BOOL hasKeepaliveConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * keepaliveConnection;              //@synthesize keepaliveConnection=_keepaliveConnection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)videoConnection;
-(void)setVideoConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)audioConnection;
-(void)setAudioConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(void)setKeepaliveConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(BOOL)hasVideoConnection;
-(BOOL)hasAudioConnection;
-(BOOL)hasKeepaliveConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)keepaliveConnection;
@end


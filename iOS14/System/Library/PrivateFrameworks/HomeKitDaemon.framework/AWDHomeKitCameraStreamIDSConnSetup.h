/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setVideoConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(void)setAudioConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(void)setKeepaliveConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(BOOL)hasVideoConnection;
-(BOOL)hasAudioConnection;
-(BOOL)hasKeepaliveConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)videoConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)audioConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)keepaliveConnection;
@end


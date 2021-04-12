/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VideoAttributes, NSString;

@interface VCRemoteVideoState : NSObject {

	BOOL _hasReceivedFirstFrame;
	BOOL _isVideoPaused;
	BOOL _isMediaStalled;
	BOOL _isVideoDegraded;
	BOOL _isVideoSuspended;
	VideoAttributes* _remoteScreenAttributes;
	VideoAttributes* _remoteVideoAttributes;
	NSString* _localInterfaceType;
	NSString* _remoteInterfaceType;

}

@property (assign) BOOL hasReceivedFirstFrame;                            //@synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame - In the implementation block
@property (assign) BOOL isVideoPaused;                                    //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign) BOOL isMediaStalled;                                   //@synthesize isMediaStalled=_isMediaStalled - In the implementation block
@property (assign) BOOL isVideoDegraded;                                  //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign) BOOL isVideoSuspended;                                 //@synthesize isVideoSuspended=_isVideoSuspended - In the implementation block
@property (retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (retain) VideoAttributes * remoteVideoAttributes;               //@synthesize remoteVideoAttributes=_remoteVideoAttributes - In the implementation block
@property (nonatomic,copy) NSString * localInterfaceType;                 //@synthesize localInterfaceType=_localInterfaceType - In the implementation block
@property (nonatomic,copy) NSString * remoteInterfaceType;                //@synthesize remoteInterfaceType=_remoteInterfaceType - In the implementation block
-(void)dealloc;
-(BOOL)isMediaStalled;
-(BOOL)isVideoDegraded;
-(BOOL)isVideoPaused;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
-(BOOL)isVideoSuspended;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(BOOL)hasReceivedFirstFrame;
-(void)setHasReceivedFirstFrame:(BOOL)arg1 ;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(void)setIsMediaStalled:(BOOL)arg1 ;
-(NSString *)localInterfaceType;
-(void)setLocalInterfaceType:(NSString *)arg1 ;
-(NSString *)remoteInterfaceType;
-(void)setRemoteInterfaceType:(NSString *)arg1 ;
-(void)setIsVideoSuspended:(BOOL)arg1 ;
@end

